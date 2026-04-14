@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (void)dealloc;
- (id)_kernel;
- (const char *)lumaTable;

@end
