@class NSArray;

@interface WFAppInBackgroundTrigger : WFTrigger

@property (copy, nonatomic) NSArray *selectedBundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
