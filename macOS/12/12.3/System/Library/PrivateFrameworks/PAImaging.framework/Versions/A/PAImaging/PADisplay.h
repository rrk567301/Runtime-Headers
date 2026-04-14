@class IPAColorProfile, PADevice, NSString;
@protocol PARenderFormat;

@interface PADisplay : NSObject <NSCopying>

@property (readonly, nonatomic) PADevice *device;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) IPAColorProfile *profile;
@property (readonly, nonatomic) id<PARenderFormat> format;
@property (readonly, nonatomic) NSString *identifier;

+ (long long)bitDepthForDisplayID:(unsigned int)a0;
+ (BOOL)_shouldLogDeepColorUsage;
+ (BOOL)_forceDeepColor;
+ (BOOL)_enableDeepColor;
+ (id)displayWithScreen:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (struct CGColorSpace { } *)colorSpace;
- (id)_buildIdentifier;
- (id)initWithDevice:(id)a0 displayID:(unsigned int)a1 profile:(id)a2 format:(id)a3;
- (id)_initWithDevice:(id)a0 displayID:(unsigned int)a1 profile:(id)a2 format:(id)a3;
- (BOOL)isEqualToDisplay:(id)a0;
- (id)displayWithPixelFormat:(id)a0;
- (id)initWithDevice:(id)a0 colorSpace:(struct CGColorSpace { } *)a1 format:(id)a2;

@end
