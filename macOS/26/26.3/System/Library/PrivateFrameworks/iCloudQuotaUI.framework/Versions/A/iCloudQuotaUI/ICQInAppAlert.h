@class NSString, NSArray;

@interface ICQInAppAlert : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *actions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)actionsForICQLinks:(id)a0 inOffer:(id)a1;
- (id)initQuotaAlmostFullAlertWithUpgradeLink:(id)a0;
- (id)initWithOffer:(id)a0 alertKey:(id)a1;
- (void)updateActionsWithOffer:(id)a0;

@end
