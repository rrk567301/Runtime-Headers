@class CIImage, NSNumber;

@interface DGVibranceFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputAmount;
    NSNumber *inputiPhotoLegacyMode;
}

+ (void)initialize;
+ (id)filterWithName:(id)a0;

- (id)customAttributes;
- (id)outputImage;

@end
