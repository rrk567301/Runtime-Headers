@interface AVCaptureExternalDisplayConfiguration : NSObject

@property (nonatomic) BOOL shouldMatchFrameRate;
@property (nonatomic) BOOL bypassColorSpaceConversion;
@property (nonatomic) struct { int width; int height; } preferredResolution;

- (id)description;

@end
