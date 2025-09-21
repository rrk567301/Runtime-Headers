@class NSArray, AlarmSearch;

@interface DeleteAlarmIntent : INIntent

@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic, copy) NSArray *alarms;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithCoder:(id)a0;

@end
