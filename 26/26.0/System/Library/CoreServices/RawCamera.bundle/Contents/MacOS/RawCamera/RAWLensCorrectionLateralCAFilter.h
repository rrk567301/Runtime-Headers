@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionLateralCAFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputLateralCAAmount;
    NSData *inputLateralCAMap;
    NSNumber *inputLateralCAMapWidth;
    NSNumber *inputLateralCAMapHeight;
    id inputColorSpace;
    CIImage *mapImg;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)customAttributes;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)makeMapImages;

@end
