@class AVCaptureDeviceInput, AVCaptureInputPort, AVWeakReference, NSArray, NSString, AVCaptureDevice, NSMutableArray;

@interface AVCaptureConnectionInternal : NSObject {
    NSMutableArray *inputPorts;
    AVCaptureDeviceInput *sourceDeviceInput;
    AVCaptureDevice *sourceDevice;
    AVWeakReference *outputWeakReference;
    AVWeakReference *videoPreviewLayerWeakReference;
    char hasActiveObservers;
    char active;
    char enabled;
    int changeSeed;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    AVCaptureInputPort *depthDataInputPort;
    AVCaptureInputPort *visionDataInputPort;
    AVCaptureInputPort *pointCloudDataInputPort;
    AVCaptureInputPort *cameraCalibrationDataInputPort;
    char videoMirroringSupported;
    char automaticallyAdjustsVideoMirroring;
    char videoMirrored;
    char videoRotationSupported;
    double videoRotationAngle;
    char clientUsesVideoRotationAngleAPI;
    char isAlmondUIImagePickerControllerClient;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMaxFrameDuration;
    double videoMaxScaleAndCropFactor;
    double videoScaleAndCropFactor;
    int videoRetainedBufferCountHint;
    long long preferredVideoStabilizationMode;
    char videoStabilizationEnabled;
    long long activeVideoStabilizationMode;
    char hasVideoMinFrameDurationObserver;
    NSString *connectionID;
    char cameraIntrinsicMatrixDeliverySupported;
    char cameraIntrinsicMatrixDeliveryEnabled;
    char livePhotoMetadataWritingEnabled;
    char debugMetadataSidecarFileEnabled;
    NSArray *supportedVideoMirroringMethodsForMovieRecording;
    long long videoMirroringMethodForMovieRecording;
    char videoZoomSmoothingSupported;
    char videoZoomSmoothingEnabled;
    char videoGreenGhostMitigationSupported;
    char videoGreenGhostMitigationEnabled;
    char videoDeviceOrientationCorrectionSupported;
    char videoDeviceOrientationCorrectionEnabled;
}

@end
