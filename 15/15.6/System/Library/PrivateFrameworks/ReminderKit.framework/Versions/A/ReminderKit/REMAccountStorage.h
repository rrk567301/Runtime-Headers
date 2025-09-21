@class NSData, NSString, REMObjectID, REMCRMergeableOrderedSet, NSSet, REMResolutionTokenMap, REMAccountTypeHost, REMManualOrdering;

@interface REMAccountStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding> {
    REMAccountTypeHost *_accountTypeHost;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    REMCRMergeableOrderedSet *_listIDsMergeableOrdering;
    char _isAddingExtraPrimaryCKAccountForTesting;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (retain, nonatomic) NSData *listIDsMergeableOrderingData;
@property (retain, nonatomic) REMManualOrdering *pinnedListsManualOrdering;
@property (retain, nonatomic) REMManualOrdering *templatesManualOrdering;
@property (nonatomic) char markedForRemoval;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (retain, nonatomic) NSSet *smartListIDsToUndelete;
@property (nonatomic) char listsDADisplayOrderChanged;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (nonatomic) char inactive;
@property (nonatomic) char didChooseToMigrate;
@property (nonatomic) char didChooseToMigrateLocally;
@property (nonatomic) char didFinishMigration;
@property (nonatomic) long long persistenceCloudSchemaVersion;
@property (nonatomic) char debugSyncDisabled;
@property (copy, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) char daAllowsCalendarAddDeleteModify;
@property (nonatomic) char daSupportsSharedCalendars;
@property (nonatomic) char daWasMigrated;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isUnsupported;
- (id)accountTypeHost;
- (unsigned long long)storeGeneration;
- (char)_isAddingExtraPrimaryCKAccountForTesting;
- (void)_setIsAddingExtraPrimaryCKAccountForTesting:(char)a0;
- (id)cdKeyToStorageKeyMap;
- (char)hasDeserializedListIDsMergeableOrdering;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 listIDsMergeableOrdering:(id)a3;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 nullableListIDsMergeableOrdering:(id)a3;
- (id)listIDsMergeableOrderingReplicaIDSource;
- (id)optionalObjectID;
- (id)serializedListIDsMergeableOrdering;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)setMinimumSupportedVersion:(long long)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;

@end
