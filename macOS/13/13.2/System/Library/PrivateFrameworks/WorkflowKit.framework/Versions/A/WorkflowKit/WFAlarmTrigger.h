@class NSArray;

@interface WFAlarmTrigger : WFTrigger

@property (nonatomic) long long alarmType;
@property (copy, nonatomic) NSArray *alarmIDs;
@property (copy, nonatomic) NSArray *cachedAlarmDescriptions;
@property (nonatomic) long long alarmState;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
