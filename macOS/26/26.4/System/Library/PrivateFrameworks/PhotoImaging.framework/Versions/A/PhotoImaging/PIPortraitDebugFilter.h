@class CIImage, NSDictionary;

@interface PIPortraitDebugFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSDictionary *depthInfo;

- (void).cxx_destruct;
- (id)outputImage;

@end
