@class NSString, NSDate;

@interface AMSHardwareOfferItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *backingIdentifier;
@property (retain, nonatomic) NSDate *expiration;
@property (nonatomic) BOOL omitBadge;
@property (nonatomic) BOOL omitAppBadge;

+ (id)latestExpirationDateFromItems:(id)a0;
+ (BOOL)shouldBadgeAppWithItems:(id)a0;
+ (BOOL)shouldBadgeRowWithItems:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAMSFollowUpItem:(id)a0;
- (id)initWithFollowUpItem:(id)a0;

@end
