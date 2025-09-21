@class NSURL, NSArray, NSData;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *layoutBundleURL;
@property (retain, nonatomic) NSArray *supportedLocalizations;
@property (nonatomic) char shouldBadge;
@property (nonatomic) long long priority;
@property (nonatomic) char entitledToForceLargeCard;
@property (retain, nonatomic) NSData *clientData;
@property (readonly, nonatomic) char hasHitMaxViewCount;
@property (readonly, nonatomic) char hasHitMaxLargeViewCount;

+ (id)activeItemFromEngagementRequest:(id)a0;
+ (id)convertEngagementRequestToDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)eventForKey:(id)a0;
- (char)isTerminalStatus;
- (void)updateForRuleResult:(char)a0;
- (void)updateWithDiscoveryItem:(id)a0;

@end
