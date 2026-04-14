@class CIImage, NSData, NSNumber;

@interface RAWLensCorrectionVignetteFilter : RAWFilter {
    CIImage *inputImage;
    NSData *inputVignetteTable;
    NSNumber *inputVignetteAmount;
    id inputColorSpace;
    CIImage *vigImg;
}

+ (id)customAttributes;

- (id)customAttributes;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (void).cxx_destruct;
- (BOOL)makeMapImages;

@end
