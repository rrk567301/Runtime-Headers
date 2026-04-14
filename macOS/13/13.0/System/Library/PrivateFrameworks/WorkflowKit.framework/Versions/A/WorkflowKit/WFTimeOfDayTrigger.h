@class NSArray, NSDateComponents, NSNumber;

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long event;
@property (nonatomic) unsigned long long timeOffset;
@property (retain, nonatomic) NSDateComponents *time;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSArray *daysOfWeek;
@property (copy, nonatomic) NSNumber *dayOfMonth;

+ (id)dateFormatter;
+ (id)localizedDisplayName;
+ (long long)triggerBacking;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)a0 timeOffset:(unsigned long long)a1;
+ (id)localizedRecurrenceDescriptionForDaysOfWeek:(id)a0 dayOfMonth:(id)a1 mode:(unsigned long long)a2;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
