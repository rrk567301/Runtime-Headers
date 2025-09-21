@class CIImage, NSDictionary;

@interface PIPortraitDebugFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSDictionary *depthInfo;

- (id)outputImage;
- (void).cxx_destruct;

@end
