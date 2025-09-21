@class NSArray;

@interface WFBluetoothTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedDevices;
@property (nonatomic) unsigned long long selection;
@property (nonatomic) char onConnect;
@property (nonatomic) char onDisconnect;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)tintColor;
+ (char)isAllowedToRunAutomatically;
+ (char)requiresNotification;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;

@end
