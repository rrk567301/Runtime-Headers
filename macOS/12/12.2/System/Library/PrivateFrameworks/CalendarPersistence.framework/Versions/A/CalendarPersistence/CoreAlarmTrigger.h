@class NSString;

@interface CoreAlarmTrigger : CALPropertyValue

@property int proximity;
@property (retain) NSString *location;

+ (id)trigger;
+ (id)triggerWithDuration:(id)a0;
+ (id)triggerWithDate:(id)a0;
+ (id)triggerWithDuration:(id)a0 withRelation:(int)a1;

- (id)description;
- (void).cxx_destruct;
- (id)date;
- (id)initWithDate:(id)a0;
- (id)signature;
- (id)duration;
- (id)setDuration:(id)a0;
- (int)relation;
- (id)setDate:(id)a0;
- (id)initWithDuration:(id)a0;
- (void)setRelation:(int)a0;
- (BOOL)isDurationBased;
- (id)NSCalendarDate;
- (BOOL)isProximity;
- (void)setNSCalendarDate:(id)a0;
- (id)initWithDuration:(id)a0 withRelation:(int)a1;

@end
