@class NSString;

@interface DNDMeDeviceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long meDeviceStatus;
@property (readonly, copy, nonatomic) NSString *meDeviceName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(unsigned long long)a0 name:(id)a1;

@end
