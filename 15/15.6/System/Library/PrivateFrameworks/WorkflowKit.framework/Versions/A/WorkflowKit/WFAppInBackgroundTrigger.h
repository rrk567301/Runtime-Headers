@class NSArray;

@interface WFAppInBackgroundTrigger : WFTrigger

@property (copy, nonatomic) NSArray *selectedBundleIdentifiers;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isUserInitiated;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;

@end
