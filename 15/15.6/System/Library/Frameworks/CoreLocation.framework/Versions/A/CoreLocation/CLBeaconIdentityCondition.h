@class NSUUID, NSNumber;

@interface CLBeaconIdentityCondition : CLCondition <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSNumber *major;
@property (readonly, copy, nonatomic) NSNumber *minor;

+ (id)any;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (id)_initWithUUID:(id)a0 major:(id)a1 minor:(id)a2;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1;
- (id)initWithUUID:(id)a0 major:(unsigned short)a1 minor:(unsigned short)a2;

@end
