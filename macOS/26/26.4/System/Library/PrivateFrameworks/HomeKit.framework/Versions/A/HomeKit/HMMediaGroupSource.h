@class NSUUID, NSString;

@interface HMMediaGroupSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUniqueIdentifier;
@property (readonly, copy) NSString *deviceIdentifier;
@property (readonly, copy) NSUUID *homeTheaterIdentifier;
@property (readonly, copy) NSUUID *roomIdentifier;
@property (readonly, copy) NSString *roomName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryUniqueIdentifier:(id)a0 deviceIdentifier:(id)a1 homeTheaterIdentifier:(id)a2 roomIdentifier:(id)a3 roomName:(id)a4;

@end
