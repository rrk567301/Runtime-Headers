@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (void)dealloc;
- (const char *)lumaTable;

@end
