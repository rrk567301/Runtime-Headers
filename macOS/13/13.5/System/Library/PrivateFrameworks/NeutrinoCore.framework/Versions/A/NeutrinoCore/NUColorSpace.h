@class NSString, NSDictionary;

@interface NUColorSpace : NSObject

@property (readonly, nonatomic) struct CGColorSpace { } *CGColorSpace;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *descriptionName;
@property (readonly, nonatomic) NSDictionary *cvPixelBufferAttachments;

+ (id)displayP3ColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericRGBColorSpace;
+ (id)sRGBColorSpace;
+ (id)workingColorSpace;
+ (id)_loadICCProfileDataWithIdentifier:(id)a0;
+ (id)adobeRGBColorSpace;
+ (id)colorSpaceFromColorPrimaries:(id)a0 transferFunction:(id)a1 yccMatrix:(id)a2;
+ (id)colorSpaceFromVideoColorProperties:(id)a0;
+ (id)displayP3LinearColorSpace;
+ (id)extendedSRGBLinearColorSpace;
+ (id)genericGrayGamma2_2ColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)itur2100HLGColorSpace;
+ (id)linearGrayColorSpace;
+ (id)rec709ColorSpace;
+ (id)sRGBLinearColorSpace;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)isWideGamut;
- (BOOL)isHDR;
- (void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0 descriptionName:(id)a1;
- (id)initWithICCProfileData:(id)a0 descriptionName:(id)a1;
- (void)nu_updateDigest:(id)a0;

@end
