@interface CoreProcAlarm : CoreAlarm

+ (id)alarmWithTrigger:(id)a0;
+ (id)humanReadableDescriptionForTrigger:(id)a0 bookmark:(id)a1 isAllDay:(BOOL)a2;
+ (id)alarmWithTrigger:(id)a0 withAttachment:(id)a1;

- (id)attachment;
- (id)setAttachment:(id)a0;
- (id)setDesc:(id)a0;
- (id)desc;
- (id)humanReadableDescription;
- (Class)correspondingOccurrenceClass;
- (id)initWithTrigger:(id)a0;
- (id)humanReadableDescriptionIsAllDay:(BOOL)a0;
- (id)initWithTrigger:(id)a0 withAttachment:(id)a1;

@end
