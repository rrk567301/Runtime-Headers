@class NSString, PKMiniDiscoveryCard, NSArray, PKDiscoveryCallToAction, PKDiscoveryCard, PKDiscoveryItem;

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long priority;
@property (retain, nonatomic) PKDiscoveryItem *item;
@property (readonly, nonatomic) char entitledToForceLargeCard;
@property (readonly, nonatomic, getter=hasHitMaxLargeViewCount) char hitMaxLargeViewCount;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) PKDiscoveryCard *card;
@property (readonly, nonatomic) PKMiniDiscoveryCard *miniCard;
@property (readonly, nonatomic) NSArray *shelves;
@property (readonly, nonatomic) PKDiscoveryCallToAction *footerLockup;
@property (readonly, nonatomic) NSString *preferredLocalization;
@property (copy, nonatomic) id /* block */ actionOnDismiss;
@property (readonly, nonatomic, getter=hasRequestedBadge) char requestedBadge;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)_updatePreferredLocalizationWithBundle:(id)a0;
- (char)isEqualForUI:(id)a0;
- (unsigned long long)isWritingDirectionRTL;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
