@class NSURL, NSArray;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *layoutBundleURL;
@property (retain, nonatomic) NSArray *supportedLocalizations;
@property (nonatomic) BOOL shouldBadge;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL entitledToForceLargeCard;
@property (nonatomic, getter=hasHitMaxLargeViewCount) BOOL hitMaxLargeViewCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isTerminalStatus;
- (void)updateForRuleResult:(BOOL)a0;
- (void)updateWithDiscoveryItem:(id)a0;

@end
