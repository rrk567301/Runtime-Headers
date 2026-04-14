@interface IDSOffGridDeliveryHandlesDonationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long priority;
@property (nonatomic) BOOL isInitialDonation;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
