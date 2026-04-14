@interface CoreMailAlarm : CoreAlarm

+ (id)alarmWithTrigger:(id)a0;
+ (id)alarmWithTrigger:(id)a0 withSummary:(id)a1 withDesc:(id)a2;
+ (id)humanReadableDescriptionForTrigger:(id)a0 email:(id)a1 isAllDay:(BOOL)a2;

- (id)attachments;
- (id)setDesc:(id)a0;
- (id)desc;
- (id)setSummary:(id)a0;
- (id)summary;
- (id)attendees;
- (id)removeAttachment:(id)a0;
- (id)addAttendee:(id)a0;
- (id)removeAttendee:(id)a0;
- (id)addAttachment:(id)a0;
- (id)humanReadableDescription;
- (Class)correspondingOccurrenceClass;
- (id)removeAllAttendees;
- (id)initWithTrigger:(id)a0;
- (id)initWithTrigger:(id)a0 withSummary:(id)a1 withDesc:(id)a2;
- (id)humanReadableDescriptionIsAllDay:(BOOL)a0;

@end
