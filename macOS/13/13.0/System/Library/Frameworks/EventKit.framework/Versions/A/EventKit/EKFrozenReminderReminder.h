@interface EKFrozenReminderReminder : EKFrozenReminderObject

+ (Class)meltedClass;

- (id)calendar;
- (id)timeZone;
- (id)UUID;
- (id)uniqueIdentifier;
- (id)unlocalizedTitle;
- (unsigned long long)priority;
- (id)uniqueID;
- (id)creationDate;
- (id)clientLocation;
- (id)completionDate;
- (id)notes;
- (id)structuredLocation;
- (id)actionString;
- (id)lastModifiedDate;
- (id)URLString;
- (id)alarms;
- (id)startDateComponents;
- (id)organizer;
- (id)originalItem;
- (BOOL)hasAttendees;
- (id)dueDateComponents;
- (id)_reminder;
- (id)remObjectID;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)syncError;
- (id)initNewReminderInStore:(id)a0;
- (id)_copyToNewList:(id)a0 error:(id *)a1;
- (void)_fixAlarmUUIDsForClone:(id)a0 from:(id)a1;
- (id)calendarItemIdentifier;
- (id)calendarItemExternalIdentifier;
- (id)allAlarmsSet;
- (id)appLinkData;
- (id)structuredLocationWithoutPrediction;
- (BOOL)hasRecurrenceRules;
- (BOOL)hasNotes;
- (id)attendeesRaw;
- (id)recurrenceRulesSet;
- (id)selfAttendee;
- (id)travelStartLocation;
- (id)attachmentsSet;
- (id)detachedItems;
- (id)ekExceptionDates;
- (BOOL)defaultAlarmRemoved;
- (BOOL)defaultAlarmWasDeleted;

@end
