@class CALOccurrence;

@interface CoreAlarmOccurrence : CALOccurrence {
    CALOccurrence *_originOccurrence;
    BOOL _isSnoozed;
}

+ (id)occurrenceFromEntity:(id)a0 originOccurrence:(id)a1;

- (void).cxx_destruct;
- (BOOL)isSnoozed;
- (void)setIsSnoozed:(BOOL)a0;
- (id)occurrenceID;
- (void)setOriginOccurrence:(id)a0;
- (id)originOccurrence;
- (id)alarmEntity;

@end
