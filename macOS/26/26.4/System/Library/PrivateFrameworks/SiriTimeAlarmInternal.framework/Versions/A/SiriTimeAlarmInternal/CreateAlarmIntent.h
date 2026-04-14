@class NSString, NSArray, NSDateComponents, NSNumber;

@interface CreateAlarmIntent : INIntent

@property (nonatomic, retain) NSNumber *relativeOffsetInMinutes;
@property (nonatomic, copy) NSDateComponents *time;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, retain) NSNumber *isMeridianInferred;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
