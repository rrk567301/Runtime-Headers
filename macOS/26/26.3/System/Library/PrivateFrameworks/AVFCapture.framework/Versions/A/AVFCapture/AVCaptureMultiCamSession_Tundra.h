@interface AVCaptureMultiCamSession_Tundra : AVCaptureSession_Tundra

@property (class, readonly, nonatomic, getter=isMultiCamSupported) BOOL multiCamSupported;

@property (readonly, nonatomic) float hardwareCost;
@property (readonly, nonatomic) float systemPressureCost;

- (id)init;
- (void)dealloc;

@end
