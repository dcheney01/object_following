import pyzed.sl as sl
import cv2
import time

def main():
    # Create a ZED camera object
    zed = sl.Camera()
    # Set configuration parameters (modify as needed)
    init_params = sl.InitParameters()
    init_params.camera_resolution = sl.RESOLUTION.HD720  # Adjust resolution
    init_params.depth_mode = sl.DEPTH_MODE.PERFORMANCE  # Adjust depth mode
    # Open the camera
    if not zed.is_opened():
        print("Opening ZED Camera...")
        status = zed.open(init_params)
        if status != sl.ERROR_CODE.SUCCESS:
            print(f"Error opening ZED Camera: {str(status)}")
            return

    runtime_params = sl.RuntimeParameters()

    try:
        start = time.time()
        while start-time.time() < 80:
            # Capture a new frame
            if zed.grab(runtime_params) == sl.ERROR_CODE.SUCCESS:
                # Retrieve left image
                left_image = sl.Mat()
                zed.retrieve_image(left_image, sl.VIEW.LEFT)
                cv2.imwrite(f"/home/daniel/catkin_ws/src/josh_vision/data/zed_data/{time.time()}.png", left_image.get_data())

                # Display the left image
                cv2.imshow("ZED Camera", left_image.get_data())

                # Exit when 'q' is pressed
                key = cv2.waitKey(10)
                if key == ord('q'):
                    break

    finally:
        # Close the camera
        zed.close()
        print("ZED Camera closed.")

if __name__ == "__main__":
    main()
