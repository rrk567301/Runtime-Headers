@class CIImage, NSNumber, NUColorSpace;
@protocol NUFlexRangeProperties;

@interface NUHDRApplyGainMapFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputGainMap;
@property (retain, nonatomic) NSNumber *inputHeadroom;
@property (retain, nonatomic) NUColorSpace *inputColorSpace;
@property (copy, nonatomic) id<NUFlexRangeProperties> flexRangeProperties;

+ (id)flexRangeGainMapApplyKernel;
+ (id)flexRangeGainMapApplyRGBKernel;
+ (id)meteorPlusGainMapApplyKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
