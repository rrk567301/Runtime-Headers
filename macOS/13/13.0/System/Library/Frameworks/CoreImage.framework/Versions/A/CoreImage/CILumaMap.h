@class CIImage;

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (void)dealloc;
- (void)setDefaults;
- (id)outputImage;
- (id)_kernel;
- (const char *)lumaTable;

@end
