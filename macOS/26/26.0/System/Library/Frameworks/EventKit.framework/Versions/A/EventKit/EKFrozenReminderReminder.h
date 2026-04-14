@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)remObjectID;
- (id)alarms;
- (id)UUID;
- (id)timeZone;
- (id)uniqueID;
- (id)structuredLocation;
- (id)notes;
- (unsigned long long)priority;
- (id)lastModifiedDate;
- (id)syncError;
- (id)unlocalizedTitle;
- (id)creationDate;
- (id)URLString;
- (id)uniqueIdentifier;
- (id)organizer;
- (id)calendar;
- (id)clientLocation;
- (id)completionDate;
- (id)actionString;
- (id)startDateComponents;
- (id)originalItem;
- (id)dueDateComponents;
- (BOOL)hasAttendees;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_copyToNewList:(id)a0 error:(id *)a1;
- (void)_fixAlarmUUIDsForClone:(id)a0 from:(id)a1;
- (id)_reminder;
- (id)allAlarmsSet;
- (id)appLinkData;
- (id)attachmentsSet;
- (id)attendeesRaw;
- (id)calendarItemExternalIdentifier;
- (id)calendarItemIdentifier;
- (BOOL)defaultAlarmRemoved;
- (BOOL)defaultAlarmWasDeleted;
- (id)detachedItems;
- (id)ekExceptionDates;
- (BOOL)hasNotes;
- (BOOL)hasRecurrenceRules;
- (id)initNewReminderInStore:(id)a0;
- (id)recurrenceRulesSet;
- (id)selfAttendee;
- (id)structuredLocationWithoutPrediction;
- (id)travelStartLocation;

@end
