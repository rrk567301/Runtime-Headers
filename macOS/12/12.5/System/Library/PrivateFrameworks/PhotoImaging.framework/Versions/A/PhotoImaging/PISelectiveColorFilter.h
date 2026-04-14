@class CIImage, NSArray;

@interface PISelectiveColorFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSArray *inputCorrections;

+ (void)iptFromLinearInto:(float *)a0 fromRed:(float)a1 green:(float)a2 blue:(float)a3;
+ (float)hueAngleFrom:(const float *)a0;
+ (id)selectiveColorKernels;
+ (double)iptHueAngleFromRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)convertToIPT:(id)a0;
+ (id)convertFromIPT:(id)a0;

- (void).cxx_destruct;
- (id)outputImage;
- (id)hueSatLumTable;

@end
