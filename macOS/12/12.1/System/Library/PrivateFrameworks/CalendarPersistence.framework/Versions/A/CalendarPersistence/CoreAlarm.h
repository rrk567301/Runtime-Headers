@class CALEntity;

@interface CoreAlarm : CALOccurrableEntity {
    CALEntity *_originEntity;
}

+ (id)entityFromManagedObject:(id)a0;
+ (id)alarmWithvCalLine:(id)a0 withParseState:(id)a1 property:(const struct { int x0; long long x1; int x2; int x3; id *x4; } *)a2;
+ (id)humanReadableDescriptionForTrigger:(id)a0 isAllDay:(BOOL)a1 travelDuration:(id)a2 includeAlert:(BOOL)a3;
+ (id)humanReadableDescriptionForTrigger:(id)a0 isAllDay:(BOOL)a1;
+ (id)humanReadableDescriptionForTrigger:(id)a0 isAllDay:(BOOL)a1 travelDuration:(id)a2 includeAlert:(BOOL)a3 abbreviate:(BOOL)a4;
+ (id)newNoneAlarm;
+ (id)humanReadableDescriptionForTrigger:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)uid;
- (id)signature;
- (id)duration;
- (id)trigger;
- (id)setTrigger:(id)a0;
- (id)acknowledged;
- (id)setAcknowledged:(id)a0;
- (id)setRelatedTo:(id)a0;
- (id)relatedTo;
- (BOOL)isNoneAlarm;
- (id)localUID;
- (BOOL)isDefaultAlarm;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (BOOL)notRelativeToTravelTime;
- (void)setNotRelativeToTravelTime:(BOOL)a0;
- (id)alarmUID;
- (void)setAlarmUID:(id)a0;
- (id)humanReadableDescription;
- (void)setOriginEntity:(id)a0;
- (Class)correspondingOccurrenceClass;
- (id)expandOnTimeRange:(id)a0;
- (id)setDuration:(id)a0 withRepeat:(int)a1;
- (id)initWithTrigger:(id)a0;
- (void)generateAlarmUID;
- (id)originEntity;
- (id)occurrenceTriggers;
- (int)repeat;
- (id)triggerForOccurrenceDateID:(id)a0;
- (id)shortHumanReadableDescription;
- (id)shortHumanReadableDescriptionIsAllDay:(BOOL)a0;
- (id)shortHumanReadableDescriptionIsAllDay:(BOOL)a0 includeTravelTime:(BOOL)a1;
- (id)shortHumanReadableDescriptionIsAllDay:(BOOL)a0 includeTravelTime:(BOOL)a1 includeAlert:(BOOL)a2;
- (id)durationRelativeToTravel;
- (BOOL)isForAllDayEvent;
- (BOOL)isSimilarToAlarm:(id)a0 useCommittedValues:(BOOL)a1;
- (void)setActionPropertyHackForiSync11:(int)a0;
- (void)markTriggerAsModified;
- (id)acknowledgeAlarm;
- (BOOL)isSnoozeAlarm;
- (id)effectiveTriggerDate;
- (void)removeAllOccurrenceTriggers;
- (void)addOccurrenceTrigger:(id)a0;
- (void)triggerDate:(id)a0 forOccurrenceDateID:(id)a1;
- (void)removeOccurrenceTriggerForOccurrenceDateID:(id)a0;
- (id)humanReadableDescriptionIsAllDay:(BOOL)a0;
- (id)shortHumanReadableDescriptionIncludingTravelTime;
- (id)shortHumanReadableDescriptionIncludingTravelTimeAndAlert;
- (BOOL)shouldPretendAlarmTextRelativeToTravel;

@end
