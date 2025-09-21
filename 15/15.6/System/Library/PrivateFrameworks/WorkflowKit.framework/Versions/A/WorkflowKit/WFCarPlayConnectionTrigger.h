@interface WFCarPlayConnectionTrigger : WFTrigger

@property (nonatomic) char onConnect;
@property (nonatomic) char onDisconnect;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isUserInitiated;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onLabel;
+ (id)displayGlyphName;
+ (char)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)offLabel;
+ (id)onIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;

@end
