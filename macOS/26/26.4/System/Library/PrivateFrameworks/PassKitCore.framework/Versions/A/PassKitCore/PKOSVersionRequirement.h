@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *iphone;
@property (retain, nonatomic) NSString *ipad;
@property (retain, nonatomic) NSString *ipod;
@property (retain, nonatomic) NSString *appletv;
@property (retain, nonatomic) NSString *mac;
@property (retain, nonatomic) NSString *watch;
@property (retain, nonatomic) NSString *vision;
@property (retain, nonatomic) NSString *specifiediphone;

+ (id)fromDeviceVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)versionForDeviceClass:(id)a0;
- (BOOL)isEqualToOSVersionRequirement:(id)a0;
- (long long)compare:(id)a0 deviceClass:(id)a1;

@end
