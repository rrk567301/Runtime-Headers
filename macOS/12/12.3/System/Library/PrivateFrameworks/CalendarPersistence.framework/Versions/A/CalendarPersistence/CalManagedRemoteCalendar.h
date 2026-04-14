@class NSString;

@interface CalManagedRemoteCalendar : CalManagedCalendar

@property BOOL isDelegate;
@property int sharingStatus;
@property int permission;
@property (retain) NSString *publishURLString;
@property (retain) NSString *prePublishURLString;
@property (retain) NSString *serverSubscriptionURLString;
@property (retain) NSString *displayTitle;
@property (retain) NSString *displayNotes;

+ (id)entityName;
+ (void)_setLikenessDataStringForUnitTest:(id)a0;

- (BOOL)isEditable;
- (id)properties;
- (void)willSave;
- (BOOL)isWritable;
- (void)setIsEditable:(BOOL)a0;
- (BOOL)isSubscribed;
- (id)publishURL;
- (id)prePublishURL;
- (void)setPublishURL:(id)a0;
- (id)subscriptionURL;
- (id)defaultOrganizerAddressForNewItems;
- (id)defaultOrganizerEmailForNewItems;
- (void)applyReasonableDefaultsForNewCalendarInGroup:(id)a0;
- (BOOL)shareDefaultAlarmSettings;
- (id)defaultOrganizerNameForNewItems;
- (id)defaultOrganizerEncodedLikenessDataForNewItems;
- (BOOL)isAddressMe:(id)a0;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0;
- (BOOL)isEditableForReply;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)a0 fromServer:(BOOL)a1;
- (BOOL)isCalDAVPublished;
- (BOOL)hasAddressForMe;
- (long long)notificationCountForClass:(Class)a0;
- (BOOL)isRefreshable;
- (id)_defaultAlarmsWithIsAllDayEvent:(BOOL)a0 fromServerForCalendar:(BOOL)a1 fromServerForPrincipal:(BOOL)a2;
- (BOOL)_calendarOwnerAddressIsEquivalentToURL:(id)a0;
- (void)setIsEditableForReply:(BOOL)a0;

@end
