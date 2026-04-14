@class NSUUID, NSString;

@interface HMMediaGroupSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUniqueIdentifier;
@property (readonly, copy) NSString *deviceIdentifier;
@property (readonly, copy) NSUUID *homeTheaterIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccessoryUniqueIdentifier:(id)a0 deviceIdentifier:(id)a1 homeTheaterIdentifier:(id)a2;

@end
