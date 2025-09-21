@class CALayer, AVCaptureDevice, AVWeakReference;

@interface AVCaptureDeviceRotationCoordinator : NSObject {
    AVWeakReference *_coordinatorWeakReference;
    AVWeakReference *_deviceWeakReference;
    long long _devicePosition;
    AVWeakReference *_previewLayerWeakReference;
    double _videoRotationAngleForHorizonLevelPreview;
    double _videoRotationAngleForHorizonLevelCapture;
    char _isInitialVideoRotationAngleForHorizonLevelPreviewSet;
    char _isInitialVideoRotationAngleForHorizonLevelCaptureSet;
}

@property (readonly, weak, nonatomic) AVCaptureDevice *device;
@property (readonly, weak, nonatomic) CALayer *previewLayer;
@property (readonly, nonatomic) double videoRotationAngleForHorizonLevelPreview;
@property (readonly, nonatomic) double videoRotationAngleForHorizonLevelCapture;

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (char)_isExternalDeviceType:(id)a0;
- (id)initWithDevice:(id)a0 previewLayer:(id)a1;

@end
