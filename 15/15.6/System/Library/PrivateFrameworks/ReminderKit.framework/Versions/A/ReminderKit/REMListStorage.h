@class NSUUID, NSString, NSArray, NSDate, REMMemberships, REMObjectID, REMColor, NSOrderedSet, NSData, NSDictionary, REMResolutionTokenMap, NSSet;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding> {
    NSOrderedSet *_reminderIDsMergeableOrdering;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class) char _forceDisableFullRemindersSorting;
@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) char isGroup;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (nonatomic) char shouldCategorizeGroceryItems;
@property (nonatomic) char shouldSuggestConversionToGroceryList;
@property (retain, nonatomic) NSString *groceryLocaleID;
@property (retain, nonatomic) NSArray *unsavedReminderIDsToCategorizeAsGroceryItems;
@property (copy, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) NSDate *pinnedDate;
@property (retain, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic) char shouldUpdateSectionsOrdering;
@property (retain, nonatomic) NSArray *unsavedSectionIDsOrdering;
@property (retain, nonatomic) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (nonatomic) char showingLargeAttachments;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering;
@property (retain, nonatomic) NSData *reminderIDsMergeableOrderingData;
@property (retain, nonatomic) NSDictionary *reminderIDsOrderingHints;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (retain, nonatomic) NSSet *reminderIDsToUndelete;
@property (retain, nonatomic) NSSet *childListIDsToUndelete;
@property (retain, nonatomic) NSSet *childSmartListIDsToUndelete;
@property (retain, nonatomic) NSSet *sectionIDsToUndelete;
@property (nonatomic) char remindersICSDisplayOrderChanged;
@property (retain, nonatomic) REMObjectID *templateID;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (copy, nonatomic) NSString *sharedOwnerAddress;
@property (nonatomic) long long sharingStatus;
@property (retain, nonatomic) NSArray *sharees;
@property (retain, nonatomic) REMObjectID *sharedOwnerID;
@property (copy, nonatomic) NSDate *lastUserAccessDate;
@property (retain, nonatomic) NSArray *calDAVNotifications;
@property (retain, nonatomic) NSString *daExternalIdentificationTag;
@property (retain, nonatomic) NSDictionary *daBulkRequests;
@property (nonatomic) long long daDisplayOrder;
@property (nonatomic) char daIsEventOnlyContainer;
@property (nonatomic) char daIsReadOnly;
@property (nonatomic) char daIsImmutable;
@property (nonatomic) char daIsNotificationsCollection;
@property (nonatomic) char isPlaceholder;
@property (copy, nonatomic) NSString *currentUserShareParticipantID;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)a0 error:(id *)a1;
+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)ekColor;
- (char)isUnsupported;
- (unsigned long long)storeGeneration;
- (id)cdKeyToStorageKeyMap;
- (char)hasDeserializedReminderIDsMergeableOrdering;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2 isGroup:(char)a3 reminderIDsMergeableOrdering:(id)a4;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2 isGroup:(char)a3 reminderIDsMergeableOrderingData:(id)a4;
- (id)optionalObjectID;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)setMinimumSupportedVersion:(long long)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;

@end
