@class NSString, NSSet, NSURL, NSDictionary, NSManagedObjectID;

@interface CalVirtualSource : NSObject <CalendarSourceModelProtocol> {
    NSString *_localizedTitle;
}

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

+ (id)propertiesUnavailableForPartialObjects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)title;
- (BOOL)isFrozen;
- (BOOL)isDelegate;
- (BOOL)isEnabledForReminders;
- (BOOL)isWritable;
- (BOOL)isNew;
- (BOOL)isEnabledForEvents;
- (BOOL)isPropertyUnavailable:(id)a0;
- (BOOL)supportsEventCalendarCreation;
- (BOOL)supportsTaskCalendarCreation;
- (BOOL)supportsEmailValidation;
- (id)initWithTypeString:(id)a0 displayOrder:(int)a1 localizedTitle:(id)a2;

@end
