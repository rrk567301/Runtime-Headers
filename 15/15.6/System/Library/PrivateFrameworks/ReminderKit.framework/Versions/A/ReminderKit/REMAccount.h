@class NSData, NSString, REMObjectID, REMAccountTemplatesContext, NSSet, REMResolutionTokenMap, REMAccountCapabilities, REMStore, REMAccountStorage, REMCRMergeableOrderedSet, NSOrderedSet, REMAccountGroupContext;

@interface REMAccount : NSObject <REMPersonIDProviding, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>

@property (class, readonly, nonatomic) REMObjectID *localInternalAccountID;
@property (class, readonly, nonatomic) REMObjectID *localAccountID;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (nonatomic) char markedForRemoval;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) NSSet *listIDsToUndelete;
@property (readonly, nonatomic) NSSet *smartListIDsToUndelete;
@property (readonly, nonatomic) char listsDADisplayOrderChanged;
@property (readonly, nonatomic) char debugSyncDisabled;
@property (readonly, nonatomic) REMAccountTemplatesContext *templatesContext;
@property (retain, nonatomic) REMStore *store;
@property (readonly, copy, nonatomic) REMAccountStorage *storage;
@property (retain, nonatomic) REMAccountCapabilities *capabilities;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (readonly, nonatomic) NSData *listIDsMergeableOrderingData;
@property (readonly, nonatomic) NSOrderedSet *listIDsOrdering;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char inactive;
@property (readonly, nonatomic) char didChooseToMigrate;
@property (readonly, nonatomic) char didChooseToMigrateLocally;
@property (readonly, nonatomic) char didFinishMigration;
@property (readonly, nonatomic) long long persistenceCloudSchemaVersion;
@property (readonly, nonatomic) NSString *daConstraintsDescriptionPath;
@property (readonly, nonatomic) char daAllowsCalendarAddDeleteModify;
@property (readonly, nonatomic) char daSupportsPhoneNumbers;
@property (readonly, nonatomic) char daSupportsSharedCalendars;
@property (readonly, nonatomic) char daWasMigrated;
@property (readonly, nonatomic) char supportsSharingLists;
@property (readonly, nonatomic) REMAccountGroupContext *groupContext;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *daSyncToken;
@property (readonly, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)_accountTypeMaskWithBitMask:(long long)a0;
+ (char)canCopyReminderLosslesslyFromAccountWithType:(long long)a0 toAccountWithType:(long long)a1 accountTypeHost:(id)a2;
+ (char)isCloudBasedAccountType:(long long)a0;

- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (char)MCIsManagedWithResultPtr:(char *)a0 error:(id *)a1;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchListsIncludingSpecialContainersWithError:(id *)a0;
- (id)fetchListsWithError:(id *)a0;
- (char)isUnsupported;
- (id)accountTypeHost;
- (id)fetchCustomSmartListsWithError:(id *)a0;
- (id)fetchListsAndSublistsWithError:(id *)a0;
- (char)canCopyReminderLosslesslyToAccount:(id)a0;
- (id)externalIdentifierForMarkedForDeletionObject;
- (id)initWithStore:(id)a0 storage:(id)a1;
- (char)isConsideredEmptyWithResultPtr:(char *)a0 withError:(id *)a1;
- (id)optionalObjectID;
- (char)shouldUseExternalIdentifierAsDeletionKey;

@end
