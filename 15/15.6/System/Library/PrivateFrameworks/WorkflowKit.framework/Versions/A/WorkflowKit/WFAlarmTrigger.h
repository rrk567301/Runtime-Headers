@class NSArray;

@interface WFAlarmTrigger : WFTrigger

@property (nonatomic) long long alarmType;
@property (copy, nonatomic) NSArray *alarmIDs;
@property (copy, nonatomic) NSArray *cachedAlarmDescriptions;
@property (nonatomic) long long alarmState;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

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
