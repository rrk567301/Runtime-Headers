@interface CoreSoundAlarm : CoreAlarm

+ (id)alarmWithTrigger:(id)a0;
+ (id)humanReadableDescriptionForTrigger:(id)a0 sound:(id)a1 isAllDay:(BOOL)a2;

- (id)URL;
- (id)setURL:(id)a0;
- (id)humanReadableDescription;
- (Class)correspondingOccurrenceClass;
- (id)initWithTrigger:(id)a0;
- (id)humanReadableDescriptionIsAllDay:(BOOL)a0;

@end
