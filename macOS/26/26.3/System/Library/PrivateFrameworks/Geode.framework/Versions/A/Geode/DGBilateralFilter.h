@class CIImage, NSNumber;

@interface DGBilateralFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputEdgeDetail;
    NSNumber *inputVersion;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)customAttributes;
- (id)outputImage;

@end
