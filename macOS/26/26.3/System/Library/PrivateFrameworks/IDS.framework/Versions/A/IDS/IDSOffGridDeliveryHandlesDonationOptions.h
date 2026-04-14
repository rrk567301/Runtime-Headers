@interface IDSOffGridDeliveryHandlesDonationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long priority;
@property (nonatomic) BOOL isInitialDonation;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
