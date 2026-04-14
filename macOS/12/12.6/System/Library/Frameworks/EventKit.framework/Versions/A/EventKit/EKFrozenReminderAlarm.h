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
+ (id)triggersFromAbsoluteDate:(id)a0 relativeOffset:(double)a1 timeValuesRelevant:(BOOL)a2 structuredLocation:(id)a3 proximity:(long long)a4;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)a0;
+ (id)semanticIdentifierFromDateComponents:(id)a0;
+ (long long)alarmProximityFromString:(id)a0;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)a0;
+ (id)alarmProximityToString:(long long)a0;
+ (id)semanticIdentifierFromREMAlarm:(id)a0;
+ (id)sharedUIDFromFrozenCalendarAlarm:(id)a0;

- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)url;
- (id)soundName;
- (id)bookmark;
- (id)emailAddress;
- (long long)proximity;
- (BOOL)isDefault;
- (id)actionString;
- (id)sharedUID;
- (id)absoluteDate;
- (id)remObjectID;
- (BOOL)isSnoozed;
- (double)relativeOffset;
- (BOOL)isTimeToLeaveAlarm;
- (id)proximityString;
- (id)acknowledgedDate;
- (BOOL)notRelativeToTravelTime;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)updatedAlarmWithLocation:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_setTimeOrLocationAlarm:(id)a0;
- (id)initWithAlarms:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (void)_setTimeAndLocationAlarms:(id)a0;
- (id)_timeAlarm;
- (id)_locationAlarm;
- (id)modifiedStructuredLocation;
- (id)_remStructuredLocation;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (id)initWithAlarms:(id)a0 inStore:(id)a1;

@end
