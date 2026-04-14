@class NSArray;

@interface WFBluetoothTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedDevices;
@property (nonatomic) unsigned long long selection;
@property (nonatomic) BOOL onConnect;
@property (nonatomic) BOOL onDisconnect;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)tintColor;
+ (BOOL)isAllowedToRunAutomatically;
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
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)suggestedActions;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
