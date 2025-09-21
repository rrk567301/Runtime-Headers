@class DNDScheduleTimePeriod, NSDate;

@interface DNDModeConfigurationScheduleTrigger : DNDModeConfigurationTrigger {
    NSDate *_creationdate;
}

@property (readonly, copy) DNDScheduleTimePeriod *timePeriod;
@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)defaultScheduleTrigger;
+ (id)triggerWithClientTrigger:(id)a0 creationDate:(id)a1;

- (BOOL)isEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimePeriod:(id)a0 creationDate:(id)a1 enabledSetting:(unsigned long long)a2;
- (id)initWithTimePeriod:(id)a0 enabledSetting:(unsigned long long)a1;

@end
