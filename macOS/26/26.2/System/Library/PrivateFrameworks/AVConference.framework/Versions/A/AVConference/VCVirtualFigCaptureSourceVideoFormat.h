@interface VCVirtualFigCaptureSourceVideoFormat : NSObject

@property (nonatomic) unsigned int format;
@property (nonatomic) struct { int width; int height; } dimensions;

@end
