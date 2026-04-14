@class NSArray, NSString, EKFrozenReminderStructuredLocation, REMAlarm;

@interface EKFrozenReminderAlarm : EKFrozenReminderObject {
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSArray *triggers;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;

+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:(id)a0;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)a0;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)a0;
+ (id)triggersFromAbsoluteDate:(id)a0 relativeOffset:(double)a1 timeValuesRelevant:(BOOL)a2 structuredLocation:(id)a3 proximity:(long long)a4;
+ (id)semanticIdentifierFromREMAlarm:(id)a0;
+ (id)semanticIdentifierFromDateComponents:(id)a0;

- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)a0;
- (id)UUID;
- (id)uniqueIdentifier;
- (id)urlWrapper;
- (void)setUrlWrapper:(id)a0;
- (id)emailAddress;
- (void)setEmailAddress:(id)a0;
- (long long)proximity;
- (BOOL)isDefaultAlarm;
- (id)originalAlarm;
- (id)acknowledgedDate;
- (double)relativeOffset;
- (id)absoluteDate;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)remObjectID;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (void)setCalendarItemOwner:(id)a0;
- (id)calendarItemOwner;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)calendarOwner;
- (void)setCalendarOwner:(id)a0;
- (id)snoozedAlarmsSet;
- (id)initWithAlarms:(id)a0 inStore:(id)a1;
- (id)initWithAlarms:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (void)_setTimeAndLocationAlarms:(id)a0;
- (id)_setTimeOrLocationAlarm:(id)a0;
- (id)_timeAlarm;
- (id)_locationAlarm;
- (id)modifiedStructuredLocation;
- (id)_remStructuredLocation;
- (id)updatedAlarmWithLocation:(id)a0;
- (id)_effectiveAlarm;

@end
