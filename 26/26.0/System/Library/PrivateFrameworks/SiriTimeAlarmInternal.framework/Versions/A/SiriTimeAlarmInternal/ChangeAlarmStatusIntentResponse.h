@class NSArray;

@interface ChangeAlarmStatusIntentResponse : INIntentResponse

@property (nonatomic, copy) NSArray *modifiedAlarms;
@property (nonatomic) long long code;

- (id)initWithBackingStore:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
