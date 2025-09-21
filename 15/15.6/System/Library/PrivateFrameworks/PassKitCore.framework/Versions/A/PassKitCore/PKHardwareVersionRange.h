@class PKDeviceVersionRange;

@interface PKHardwareVersionRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKDeviceVersionRange *iphone;
@property (readonly, nonatomic) PKDeviceVersionRange *watch;
@property (readonly, nonatomic) PKDeviceVersionRange *ipad;
@property (readonly, nonatomic) PKDeviceVersionRange *ipod;
@property (readonly, nonatomic) PKDeviceVersionRange *appletv;
@property (readonly, nonatomic) PKDeviceVersionRange *vision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (char)isEqualToHardwareVersionRange:(id)a0;
- (char)matchesDeviceVersion:(id)a0;

@end
