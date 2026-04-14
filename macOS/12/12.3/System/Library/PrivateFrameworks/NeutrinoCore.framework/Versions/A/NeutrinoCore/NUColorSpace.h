@class NSString, NSDictionary;

@interface NUColorSpace : NSObject

@property (readonly, nonatomic) struct CGColorSpace { } *CGColorSpace;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *descriptionName;
@property (readonly, nonatomic) NSDictionary *cvPixelBufferAttachments;

+ (id)displayP3ColorSpace;
+ (id)sRGBColorSpace;
+ (id)genericRGBColorSpace;
+ (id)genericGrayColorSpace;
+ (id)workingColorSpace;
+ (id)colorSpaceFromVideoColorProperties:(id)a0;
+ (id)genericGrayGamma2_2ColorSpace;
+ (id)_loadICCProfileDataWithIdentifier:(id)a0;
+ (id)colorSpaceFromColorPrimaries:(id)a0 transferFunction:(id)a1 yccMatrix:(id)a2;
+ (id)sRGBLinearColorSpace;
+ (id)rec709ColorSpace;
+ (id)itur2100HLGColorSpace;
+ (id)extendedSRGBLinearColorSpace;
+ (id)adobeRGBColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)displayP3LinearColorSpace;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)isWideGamut;
- (BOOL)isHDR;
- (void)nu_updateDigest:(id)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0 descriptionName:(id)a1;
- (id)initWithICCProfileData:(id)a0 descriptionName:(id)a1;
- (void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer { } *)a0;

@end
