@class NSArray, NSNumber, AlarmSearch;

@interface ChangeAlarmStatusIntent : INIntent

@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic, copy) NSArray *alarms;
@property (nonatomic) long long operation;
@property (nonatomic, retain) NSNumber *handleSilently;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
