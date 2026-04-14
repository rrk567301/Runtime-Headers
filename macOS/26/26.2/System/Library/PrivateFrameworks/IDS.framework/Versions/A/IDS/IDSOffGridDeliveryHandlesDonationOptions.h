@interface IDSOffGridDeliveryHandlesDonationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long priority;
@property (nonatomic) BOOL isInitialDonation;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;

@end
