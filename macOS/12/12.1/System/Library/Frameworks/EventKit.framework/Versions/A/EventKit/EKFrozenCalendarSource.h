@class NSString, EKFrozenReminderSource, NSSet, NSURL, NSDictionary, NSManagedObjectID;

@interface EKFrozenCalendarSource : EKFrozenObject <CalendarSourceModelProtocol>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isDelegate;
@property (readonly, nonatomic) BOOL isEnabledForEvents;
@property (readonly, nonatomic) BOOL isEnabledForReminders;
@property (readonly, nonatomic) BOOL supportsEventCalendarCreation;
@property (readonly, nonatomic) BOOL supportsTaskCalendarCreation;
@property (readonly, nonatomic) BOOL supportsEmailValidation;
@property (readonly, nonatomic) BOOL isWritable;
@property (retain) EKFrozenReminderSource *reminderSource;
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

+ (Class)meltedClass;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;

@end
