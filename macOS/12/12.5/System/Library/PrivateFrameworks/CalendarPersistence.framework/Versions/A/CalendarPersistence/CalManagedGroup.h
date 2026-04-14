@class NSSet, NSString, NSURL, NSDictionary, NSManagedObjectID;

@interface CalManagedGroup : CalManagedNode <CalendarSourceModelProtocol>

@property (retain) NSSet *calendars;
@property BOOL isExpanded;
@property (readonly) BOOL isRemote;
@property (readonly, copy, nonatomic) NSString *externalSourceIdentifier;
@property (readonly, retain, nonatomic) NSString *sourceIdentifier;
@property (readonly, retain, nonatomic) NSString *providerIdentifier;
@property (readonly, retain, nonatomic) NSString *typeString;
@property (readonly, nonatomic) NSSet *ownerAddresses;
@property (readonly, nonatomic) BOOL supportsDropBoxAttachments;
@property (readonly, nonatomic) BOOL supportsManagedAttachments;
@property (readonly, nonatomic) BOOL supportsUnbind;
@property (readonly, nonatomic) BOOL supportsAttendeeComments;
@property (readonly, nonatomic) BOOL supportsFreebusy;
@property (readonly, nonatomic) BOOL supportsJunkReporting;
@property (readonly, nonatomic) BOOL supportsLikenessPropagation;
@property (readonly, nonatomic) BOOL supportsPhoneNumbers;
@property (readonly, nonatomic) BOOL supportsPrivateEvents;
@property (readonly, nonatomic) BOOL supportsSharingScheduling;
@property (readonly, nonatomic) BOOL requiresOpeningAttachmentAsLink;
@property (readonly, nonatomic) int displayOrder;
@property (readonly, nonatomic) NSString *dropBoxPathString;
@property (readonly, nonatomic) NSURL *serverURL;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)otherGroupLocalizedTitle;

- (long long)compare:(id)a0;
- (id)color;
- (void)setChecked:(long long)a0;
- (long long)checked;
- (id)properties;
- (void)awakeFromInsert;
- (BOOL)isDelegate;
- (BOOL)isEnabledForReminders;
- (BOOL)isEnabledForEvents;
- (BOOL)isRenameable;
- (BOOL)supportsEventCalendarCreation;
- (BOOL)supportsTaskCalendarCreation;
- (BOOL)isColorEditable;
- (BOOL)supportsEmailValidation;
- (id)iCalendarDocumentWithID:(id)a0 name:(id)a1 description:(id)a2 color:(id)a3 options:(unsigned long long)a4;
- (id)eventCalendars;
- (id)reminderCalendars;
- (id)enclosingSource;
- (void)prefetchRelationshipsForDelete;
- (long long)notificationCountForClass:(Class)a0;
- (id)filteredNonEventCalendars:(BOOL)a0 nonReminderCalendars:(BOOL)a1 subscriptionCalendars:(BOOL)a2 sharedToMeCalendars:(BOOL)a3;

@end
