@class IPAColorProfile, PADevice, NSString;
@protocol PARenderFormat;

@interface PADisplay : NSObject <NSCopying>

@property (readonly, nonatomic) PADevice *device;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) IPAColorProfile *profile;
@property (readonly, nonatomic) id<PARenderFormat> format;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL supportsHDR;
@property (readonly, nonatomic) double maxEDRHeadroom;
@property (readonly, nonatomic) double currentEDRHeadroom;

+ (BOOL)_forceDeepColor;
+ (BOOL)_enableDeepColor;
+ (BOOL)_shouldLogDeepColorUsage;
+ (long long)bitDepthForDisplayID:(unsigned int)a0;
+ (id)displayWithScreen:(id)a0;

- (id)screen;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (struct CGColorSpace { } *)colorSpace;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)_buildIdentifier;
- (id)_initWithDevice:(id)a0 displayID:(unsigned int)a1 profile:(id)a2 format:(id)a3;
- (id)displayWithPixelFormat:(id)a0;
- (id)initWithDevice:(id)a0 colorSpace:(struct CGColorSpace { } *)a1 format:(id)a2;
- (id)initWithDevice:(id)a0 displayID:(unsigned int)a1 profile:(id)a2 format:(id)a3;
- (BOOL)isEqualToDisplay:(id)a0;

@end
