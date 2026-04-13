@class NSString, NSURL, PFChecksum;

@interface IPAColorProfile : NSObject <NSCopying> {
    unsigned char _finishLoading;
    struct ColorSyncProfile { } *_colorSyncProfile;
    struct CGColorSpace { } *_colorSpace;
}

@property (readonly, nonatomic) NSString *profileClass;
@property (readonly, nonatomic) NSString *colorSpaceType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) PFChecksum *checksum;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) struct ColorSyncProfile { } *colorSyncProfile;
@property (readonly, nonatomic) BOOL needsGamutMapping;

+ (void)initialize;
+ (id)currentIndex;
+ (id)profileWithColorSpace:(struct CGColorSpace { } *)a0;
+ (id)profileWithColorSpace:(struct CGColorSpace { } *)a0 identifier:(id)a1;
+ (id)profileWithColorSyncProfile:(struct ColorSyncProfile { } *)a0;
+ (id)profileWithColorSyncProfile:(struct ColorSyncProfile { } *)a0 name:(id)a1 wantsCache:(BOOL)a2;
+ (id)profileWithDisplayID:(int)a0;
+ (id)installedProfiles;
+ (id)profileWithIdentifier:(id)a0;
+ (id)profileWithChecksum:(id)a0;
+ (id)linearGenericP3Profile;
+ (id)genericP3Profile;
+ (id)linearGenericRGBProfile;
+ (id)newLinearSRGBProfile;
+ (id)newLinearAdobeRGBProfile;
+ (BOOL)loadProfilesWithError:(id *)a0;
+ (BOOL)unloadProfiles;
+ (id)rgbProfiles;
+ (id)cmykProfiles;
+ (id)grayProfiles;
+ (id)labProfiles;
+ (id)xyzProfiles;
+ (id)displayProfiles;
+ (id)outputProfiles;
+ (id)inputProfiles;
+ (id)abstractProfiles;
+ (id)colorSpaceProfiles;
+ (id)profileWithIdentifierValue:(id)a0;
+ (id)newP3Profile;
+ (id)newLinearP3Profile;
+ (id)newLinearWideGamutProfile;
+ (id)adobeRGBProfile;
+ (id)sRGBProfile;
+ (id)genericGrayProfile;
+ (id)genericRGBProfile;
+ (id)linearSRGBProfile;
+ (id)linearWideGamutProfile;
+ (id)linearAdobeRGBProfile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)finishLoading;
- (id)initWithProfileDictionary:(id)a0;
- (id)initWithColorSpace:(struct CGColorSpace { } *)a0 identifier:(id)a1;
- (id)initWithColorSyncProfile:(struct ColorSyncProfile { } *)a0 name:(id)a1 identifier:(id)a2;
- (BOOL)fullyLoaded;
- (BOOL)isEqualToColorProfile:(id)a0;
- (void)debugDumpProfile;
- (BOOL)isRGB;

@end
