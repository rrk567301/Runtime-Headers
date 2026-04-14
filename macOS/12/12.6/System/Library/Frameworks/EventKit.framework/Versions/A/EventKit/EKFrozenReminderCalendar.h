@class REMListChangeItem, NSString, NSSet, NSURL, NSDictionary, NSManagedObjectID;
@protocol CalendarSourceModelProtocol;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject <CalendarModelProtocol> {
    REMListChangeItem *_listChange;
}

@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (readonly, copy, nonatomic) NSString *colorString;
@property (readonly, copy, nonatomic) NSString *symbolicColorName;
@property (readonly, nonatomic) BOOL allowsContentModifications;
@property (readonly, nonatomic) BOOL allowReminders;
@property (readonly, nonatomic) BOOL allowEvents;
@property (readonly, copy, nonatomic) id<CalendarSourceModelProtocol> containerSource;
@property (readonly, nonatomic) BOOL ignoreAlarms;
@property (readonly, nonatomic) BOOL isFamilyCalendar;
@property (readonly) BOOL isMarkedUndeletable;
@property (readonly) BOOL isMarkedImmutableSharees;
@property (readonly) long long maxAttendees;
@property (readonly, nonatomic) BOOL cachedHasSharees;
@property (readonly, nonatomic) BOOL isBirthday;
@property (readonly, nonatomic) BOOL isFacebookBirthdayCalendar;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL isShareable;
@property (readonly, nonatomic) BOOL allowsScheduling;
@property (readonly, nonatomic) BOOL isSubscribedHolidayCalendar;
@property (readonly, nonatomic) BOOL isSuggestedEventCalendar;
@property (readonly, nonatomic) BOOL isNaturalLanguageSuggestedEventCalendar;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *serverPath;
@property (readonly, copy, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSString *sharingStatusString;
@property (readonly, nonatomic) NSString *sharedOwnerName;
@property (readonly, nonatomic) BOOL isDefaultSchedulingCalendar;
@property (readonly, nonatomic) BOOL isDistinguishedExchangeCalendar;
@property (readonly, nonatomic) BOOL isAffectingAvailability;
@property (readonly, nonatomic) NSString *sharedOwnerAddress;
@property (readonly, nonatomic) NSSet *sharedOwnerAddresses;
@property (readonly, nonatomic) NSString *defaultOrganizerNameForNewItems;
@property (readonly, nonatomic) NSURL *defaultOrganizerAddressForNewItems;
@property (readonly, nonatomic) NSString *defaultOrganizerEmailForNewItems;
@property (readonly, nonatomic) NSString *defaultOrganizerEncodedLikenessDataForNewItems;
@property (readonly, nonatomic) NSString *defaultOrganizerPhoneNumberForNewItems;
@property (readonly, nonatomic) BOOL defaultOrganizerIsMeForNewItems;
@property (readonly, nonatomic) NSURL *prePublishURL;
@property (readonly, nonatomic) NSURL *subscriptionURL;
@property (readonly, copy, nonatomic) NSURL *publishURL;
@property (readonly, nonatomic) NSSet *defaultAlarmsForTimedEvents;
@property (readonly, nonatomic) NSSet *defaultAlarmsForAllDayEvents;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)meltedClass;

- (id)_list;
- (void).cxx_destruct;
- (id)source;
- (id)uniqueIdentifier;
- (id)title;
- (id)color;
- (BOOL)isEditable;
- (id)_account;
- (unsigned long long)sharingStatus;
- (id)alarms;
- (BOOL)isPublished;
- (int)displayOrder;
- (id)sharees;
- (id)publishedURL;
- (BOOL)isRenameable;
- (id)remObjectID;
- (BOOL)isColorEditable;
- (BOOL)suppressEventSchedulingNotifications;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (id)initNewListInStore:(id)a0;
- (id)hexColorStringFromREMColor:(id)a0;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)REMColorFromEKHexColorString:(id)a0;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;

@end
