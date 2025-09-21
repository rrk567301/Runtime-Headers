@class NSString;

@interface WFLowPowerModeTrigger : WFTrigger <WFBinaryTrigger>

@property (nonatomic) BOOL onEnable;
@property (nonatomic) BOOL onDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)onLabel;
+ (id)yellowBatteryHierarchicalColors;
+ (id)offIcon;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)offLabel;
+ (id)onIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
