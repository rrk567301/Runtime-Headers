@interface IDSOffGridDeliveryHandlesDonationOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long priority;
@property (nonatomic) char isInitialDonation;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
