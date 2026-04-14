@class NSArray;

@interface WFWorkoutTrigger : WFTrigger

@property (nonatomic) unsigned long long selection;
@property (copy, nonatomic) NSArray *selectedWorkoutTypes;
@property (nonatomic) BOOL onStart;
@property (nonatomic) BOOL onEnd;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onLabel;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanationWithContext:(id)a0;
+ (id)offLabel;
+ (id)onIcon;
+ (id)stopColor;
+ (id)workoutColors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
