@interface WFBatteryLevelTrigger : WFTrigger

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long selection;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
