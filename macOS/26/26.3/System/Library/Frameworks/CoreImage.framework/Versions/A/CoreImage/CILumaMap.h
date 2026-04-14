@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (void)dealloc;
- (void)setDefaults;
- (const char *)lumaTable;

@end
