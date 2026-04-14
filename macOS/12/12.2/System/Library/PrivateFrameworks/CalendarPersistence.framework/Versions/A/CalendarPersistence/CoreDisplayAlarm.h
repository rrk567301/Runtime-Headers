@interface CoreDisplayAlarm : CoreAlarm

+ (id)humanReadableDescriptionForTrigger:(id)a0 isAllDay:(BOOL)a1;
+ (id)alarmWithTrigger:(id)a0 withDesc:(id)a1;
+ (id)alarmWithTrigger:(id)a0;

- (id)setDesc:(id)a0;
- (id)desc;
- (id)humanReadableDescription;
- (Class)correspondingOccurrenceClass;
- (id)initWithTrigger:(id)a0;
- (id)initWithTrigger:(id)a0 withDesc:(id)a1;
- (id)humanReadableDescriptionIsAllDay:(BOOL)a0;

@end
