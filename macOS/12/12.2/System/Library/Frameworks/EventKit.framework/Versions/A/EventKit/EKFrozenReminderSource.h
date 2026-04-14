@class NSString, NSSet, REMAccount, NSURL, NSDictionary, NSManagedObjectID;

@interface EKFrozenReminderSource : EKFrozenReminderObject <CalendarSourceModelProtocol>

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;
@property (readonly, copy, nonatomic) NSString *externalSourceIdentifier;
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

+ (Class)meltedClass;

- (id)title;
- (long long)sourceType;
- (BOOL)isDelegate;
- (BOOL)isEnabledForReminders;
- (BOOL)isWritable;
- (BOOL)isEnabledForEvents;
- (id)meltedObjectInStore:(id)a0;
- (BOOL)supportsEventCalendarCreation;
- (BOOL)supportsTaskCalendarCreation;
- (BOOL)supportsEmailValidation;

@end
