@class MADAutoAssetPersisted, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetSecure : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *secureProtectionQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;

+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (id)autoAssetSecure;
+ (id)_secureAssetBundleSummary:(id)a0;
+ (id)buildGraftFailureError:(id)a0 withUnderlyingError:(id)a1;
+ (void)commitPrePersonalized:(id)a0 committingSelectors:(id)a1 completion:(id /* block */)a2;
+ (id)commitPrePersonalizedSync:(id)a0 committingSelectors:(id)a1;
+ (void)depersonalizeIfSecure:(id)a0 forDescriptor:(id)a1;
+ (BOOL)doesDescriptorInvolveGrafting:(id)a0 forDescriptor:(id)a1;
+ (BOOL)doesDescriptorInvolvePersonalization:(id)a0 forDescriptor:(id)a1;
+ (BOOL)doesDescriptorInvolveSecureOperations:(id)a0 forDescriptor:(id)a1;
+ (BOOL)doesSetDescriptorInvolveSecureOperations:(id)a0 forSetDescriptor:(id)a1 withAutoAssetDescriptors:(id)a2;
+ (id)getGraftPath:(id)a0 forDescriptor:(id)a1;
+ (void)graftDownloaded:(id)a0 graftingDescriptor:(id)a1 setDescriptor:(id)a2 completion:(id /* block */)a3;
+ (BOOL)graftOrMount:(id)a0 ofSecureAssetBundle:(id)a1 withAccessOptions:(id)a2 accessMechanismPtr:(long long *)a3 errorPtr:(id *)a4;
+ (BOOL)graftSecureAsset:(id)a0 secureAssetBundle:(id)a1 forSetDescriptor:(id)a2 forAssetID:(id)a3 withSelector:(id)a4 accessMechanismPtr:(long long *)a5 error:(id *)a6;
+ (BOOL)isCodeAsset:(id)a0 forDescriptor:(id)a1;
+ (BOOL)isErrorDueToDeviceBeingLocked:(id)a0;
+ (BOOL)isGraftedOrMounted:(id)a0 forDescriptor:(id)a1;
+ (BOOL)isPersonalizationOrGraftingRequired:(id)a0 forDescriptor:(id)a1;
+ (BOOL)isPersonalizationOrGraftingRequired:(id)a0 forSetDescriptor:(id)a1;
+ (BOOL)isPersonalizationRequired:(id)a0 forDescriptor:(id)a1;
+ (BOOL)isPersonalizationRequired:(id)a0 forSetDescriptor:(id)a1;
+ (BOOL)isPrePersonalized:(id)a0 forDescriptor:(id)a1;
+ (BOOL)isSecureAsset:(id)a0 forDescriptor:(id)a1;
+ (id)latestDownloadedAtomicInstanceEntries:(id)a0 forSetDescriptor:(id)a1 withAvailableForUseError:(id *)a2;
+ (id)localContentURL:(id)a0 forAssetType:(id)a1 assetId:(id)a2;
+ (id)localContentURL:(id)a0 forDescriptor:(id)a1;
+ (void)mapToExclave:(id)a0 forDescriptor:(id)a1 completion:(id /* block */)a2;
+ (void)personalizeDownloaded:(id)a0 personalizingDescriptor:(id)a1 allowingNetwork:(BOOL)a2 committingPersonalization:(BOOL)a3 completion:(id /* block */)a4;
+ (void)personalizeDownloaded:(id)a0 personalizingDescriptor:(id)a1 allowingNetwork:(BOOL)a2 committingPersonalization:(BOOL)a3 reportingPromotionState:(BOOL)a4 completion:(id /* block */)a5;
+ (void)personalizeGraftDownloaded:(id)a0 forDescriptor:(id)a1 setDescriptor:(id)a2 allowingNetwork:(BOOL)a3 completion:(id /* block */)a4;
+ (void)personalizeGraftSetDownloaded:(id)a0 forSetDescriptor:(id)a1 allowingNetwork:(BOOL)a2 withAutoAssetDescriptors:(id)a3 completion:(id /* block */)a4;
+ (void)personalizeSetDownloaded:(id)a0 forSetDescriptor:(id)a1 allowingNetwork:(BOOL)a2 withAutoAssetDescriptors:(id)a3 completion:(id /* block */)a4;
+ (void)personalizeSetDownloaded:(id)a0 forSetDescriptor:(id)a1 allowingNetwork:(BOOL)a2 withAutoAssetDescriptors:(id)a3 reportingPromotionState:(BOOL)a4 completion:(id /* block */)a5;
+ (void)personalizeSetDownloaded:(id)a0 forSetDescriptor:(id)a1 shouldGraft:(BOOL)a2 allowingNetwork:(BOOL)a3 withAutoAssetDescriptors:(id)a4 reportingPromotionState:(BOOL)a5 completion:(id /* block */)a6;
+ (BOOL)readyToCommitPrePersonalized:(id)a0 forSetDescriptor:(id)a1;
+ (void)removeAllPersisted;
+ (id)secureAssetBundle:(id)a0 forSetAtomicEntry:(id)a1;
+ (id)secureBundleForAssetType:(id)a0 assetId:(id)a1;
+ (long long)secureOperationGraftOrMount:(long long)a0;
+ (long long)secureOperationUngraftOrUnmount:(long long)a0;
+ (void)telemetryReportSecureFinished:(long long)a0 forAssetSelector:(id)a1 withFailureError:(id)a2;
+ (void)telemetryReportSecureStart:(long long)a0 reportingPromotionState:(BOOL)a1 forAssetSelector:(id)a2 withFailureError:(id)a3;
+ (BOOL)ungraft:(id)a0 forDescriptor:(id)a1 ungraftingError:(id *)a2;
+ (BOOL)ungraftAll:(id)a0 forSetDescriptor:(id)a1 withAutoAssetDescriptors:(id)a2 ungraftingError:(id *)a3;
+ (void)ungraftIfNotAccessible:(id)a0 checkingAssetPath:(id)a1;
+ (BOOL)ungraftOrUnmount:(id)a0 ofSecureAssetBundle:(id)a1 withAccessOptions:(id)a2 accessMechanismPtr:(long long *)a3 errorPtr:(id *)a4;

- (void).cxx_destruct;
- (id)init;
- (void)_personalizeGraftSetDownloaded:(id)a0 forSetDescriptor:(id)a1 allowingNetwork:(BOOL)a2 requiringPersonalization:(id)a3 requiringGrafting:(id)a4 shouldGraft:(BOOL)a5 reportingPromotionState:(BOOL)a6 completion:(id /* block */)a7;

@end
