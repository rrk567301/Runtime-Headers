@class NSUUID, HMDAccessory;

@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) long long state;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessory:(id)a0 identifier:(id)a1 state:(long long)a2;

@end
