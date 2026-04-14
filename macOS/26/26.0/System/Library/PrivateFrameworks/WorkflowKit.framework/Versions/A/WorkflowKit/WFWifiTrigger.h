@class NSArray;

@interface WFWifiTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedNetworks;
@property (nonatomic) unsigned long long selection;
@property (nonatomic) BOOL onConnect;
@property (nonatomic) BOOL onDisconnect;
@property (nonatomic) BOOL runAfterConnectionInterruption;

+ (BOOL)supportsSecureCoding;
+ (id)tintColor;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)onLabel;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
