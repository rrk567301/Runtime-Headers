@class NSDictionary, NSString, NSSet;

@interface MCMEntitlements : NSObject <MCMEntitlements> {
    NSDictionary *_sanitizedLookup;
    NSSet *_sanitizedWipe;
    BOOL _isSimulatorTestClient;
}

@property (retain, nonatomic) NSDictionary *rawEntitlements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *lookup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL privileged;
@property (readonly, nonatomic) BOOL proxyAllowed;
@property (readonly, nonatomic) BOOL testabilityAllowed;
@property (readonly, nonatomic) BOOL hasSystemContainer;
@property (readonly, nonatomic) BOOL allowed;
@property (readonly, nonatomic) BOOL otherIDLookup;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canManageUserManagedAssets;
@property (readonly, nonatomic) BOOL canControlCaches;
@property (readonly, nonatomic) BOOL canRepair;
@property (readonly, nonatomic) BOOL canStageSharedContent;
@property (readonly, nonatomic) BOOL canPerformDataMigration;
@property (readonly, nonatomic) BOOL canDeleteContainerContent;
@property (readonly, nonatomic) BOOL requestsNoContainer;
@property (readonly, nonatomic) BOOL canReadReferences;
@property (readonly, nonatomic) BOOL canReadWriteReferences;

+ (id)copyGroupEntitlementForIdentifier:(id)a0 entitlements:(id)a1 groupKey:(id)a2;
+ (id)appGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;
+ (id)systemGroupIdentifiersForIdentifier:(id)a0 entitlements:(id)a1;
+ (id)entitlementForGroupContainerClass:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)prune;
- (BOOL)isAllowedToLookupAllContainersOfClass:(unsigned long long)a0;
- (BOOL)isAllowedToLookupContainerIdentity:(id)a0;
- (BOOL)isAllowedToLookupGroupContainersOfClass:(unsigned long long)a0 ownedByIdentifier:(id)a1;
- (BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)a0;
- (BOOL)isAllowedToControlCaches;
- (BOOL)isAllowedToReplaceContainers;
- (BOOL)isAllowedToAccessInfoMetadata;
- (BOOL)isAllowedToRecreateContainerStructure;
- (BOOL)isAllowedToRegenerateDirectoryUUIDs;
- (BOOL)isAllowedToDelete;
- (BOOL)isAllowedToWipeAnyDataContainer;
- (BOOL)isAllowedToTest;
- (BOOL)isAllowedToAccessCodesignMapping;
- (BOOL)isAllowedToSetDataProtection;
- (BOOL)isAllowedToRestoreContainer;
- (BOOL)isAllowedToStartDataMigration;
- (BOOL)isAllowedToStartUserDataMigration;
- (BOOL)isAllowedToStageSharedContent;
- (BOOL)isAllowedToAccessUserAssets;
- (BOOL)isAllowedToReadReferences;
- (BOOL)isAllowedToChangeReferences;
- (BOOL)isEntitledForLookupWithClass:(unsigned long long)a0 identifier:(id)a1;
- (id)lookupForContainerClass:(unsigned long long)a0;
- (BOOL)isOwnerOfContainerWithClass:(unsigned long long)a0 identifier:(id)a1;
- (int)intendedDataProtectionClass;
- (id)appGroupIdentifiers;
- (id)systemGroupIdentifiers;
- (id)containerRequiredIdentifier;
- (id)copyEntitlementsDictionaryByRemovingGroupContainerOfClass:(unsigned long long)a0 groupIdentifier:(id)a1;
- (id)copyEntitlementsDictionaryByAddingGroupContainerOfClass:(unsigned long long)a0 groupIdentifier:(id)a1;
- (id)initWithEntitlements:(id)a0 clientIdentifier:(id)a1;
- (id)initForPrivilegedAnonymous;
- (id)_setOfStringsFromArray:(id)a0;

@end
