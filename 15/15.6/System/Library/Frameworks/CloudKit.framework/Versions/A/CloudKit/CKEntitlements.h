@class NSString, NSDictionary, NSArray, NSError;

@interface CKEntitlements : NSObject <NSCopying, CKSQLiteItem> {
    int _pid;
    NSString *_cachedApplicationBundleID;
    NSDictionary *_entitlementsDict;
    NSError *_secEntitlementsError;
    NSString *_procName;
}

@property (readonly) NSString *applicationBundleID;
@property (readonly, nonatomic) NSString *associatedApplicationBundleID;
@property (readonly, nonatomic) NSString *apsEnvironmentEntitlement;
@property (readonly, nonatomic) char hasSPIEntitlement;
@property (readonly, nonatomic) char hasMasqueradingEntitlement;
@property (readonly, nonatomic) char hasProtectionDataEntitlement;
@property (readonly, nonatomic) char hasZoneProtectionDataEntitlement;
@property (readonly, nonatomic) char hasCloudKitSystemServiceEntitlement;
@property (readonly, nonatomic) char hasSystemLaunchDaemonEntitlement;
@property (readonly, nonatomic) char hasDarkWakeNetworkReachabilityEnabledEntitlement;
@property (readonly, nonatomic) char hasAllowAccessDuringBuddyEntitlement;
@property (readonly, nonatomic) char hasLightweightPCSEntitlement;
@property (readonly, nonatomic) char hasOutOfProcessUIEntitlement;
@property (readonly, nonatomic) char hasParticipantPIIEntitlement;
@property (readonly, nonatomic) char hasDisplaysSystemAcceptPromptEntitlement;
@property (readonly, nonatomic) NSDictionary *serviceNameForContainerIdentifierMapEntitlement;
@property (readonly, nonatomic) char hasNonLegacyShareURLEntitlement;
@property (readonly, nonatomic) char hasAllowUnverifiedAccountEntitlement;
@property (readonly, nonatomic) char hasNotifyOnAccountWarmupEntitlement;
@property (readonly, nonatomic) char hasAllowRealTimeOperationsEntitlement;
@property (readonly, nonatomic) char hasCloudKitSupportServiceEntitlement;
@property (readonly, nonatomic) char hasExplicitCodeOperationURLEntitlement;
@property (readonly, nonatomic) NSString *codeServiceURLEntitlement;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByServiceEntitlement;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByContainerAndServiceEntitlement;
@property (readonly, nonatomic) char hasVFSOpenByIDEntitlement;
@property (readonly, nonatomic) char hasAllowPackagesEntitlement;
@property (readonly, nonatomic) char hasAlwaysAllowPublishAssetsEntitlement;
@property (readonly, nonatomic) char hasAllowOnDeviceAssetStreamingEntitlement;
@property (readonly, nonatomic) char hasEnvironmentEntitlement;
@property (readonly, nonatomic) char hasCustomAccountsEntitlement;
@property (readonly, nonatomic) char hasNetworkSocketDelegateEntitlement;
@property (readonly, nonatomic) NSString *clientPrefixEntitlement;
@property (readonly, nonatomic) char hasAssetBoundaryKeyEntitlement;
@property (readonly, nonatomic) char hasTemporaryDeviceCapabilitiesEntitlement;
@property (readonly, nonatomic) char hasAllowFakeEntitlementsEntitlement;
@property (readonly, nonatomic) long long containerEnvironment;
@property (readonly, nonatomic) NSArray *developmentContainerEnvironmentOverrides;
@property (readonly, nonatomic) NSArray *cloudServices;
@property (readonly, nonatomic) char isBackgroundAssetsExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)entitlementsByAddingOverlay:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 pid:(int)a1;
- (id)initWithCurrentProcess;
- (id)initWithEntitlementsDict:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)sqliteRepresentation;
- (char)validateEntitlementsWithSDKVersion:(unsigned int)a0 error:(id *)a1;

@end
