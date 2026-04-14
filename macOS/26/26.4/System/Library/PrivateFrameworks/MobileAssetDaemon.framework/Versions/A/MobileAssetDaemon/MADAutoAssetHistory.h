@class MADAutoAssetHistoryTracker, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetHistory : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *historyProtectionQueue;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerFilesystem;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerLocker;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerAtomic;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerPushNotification;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerError;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerStager;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerScheduler;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerSecure;
@property (nonatomic) BOOL persistedStateLoaded;

+ (void)loadPersistedState;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 withSelectors:(id)a2 failingWithError:(id)a3;
+ (id)autoAssetHistory;
+ (float)getMaxPercentOfHistorySpace:(long long)a0;
+ (void)recordFailedOperation:(long long)a0 fromClient:(id)a1 forAssetID:(id)a2 failingWithError:(id)a3;
+ (void)recordFailedOperation:(long long)a0 fromClient:(id)a1 forAssetID:(id)a2 withSelector:(id)a3 failingWithError:(id)a4;
+ (void)recordFailedOperation:(long long)a0 fromClient:(id)a1 forClientDomainName:(id)a2 forAssetSetIdentifier:(id)a3 forAtomicInstance:(id)a4 failingWithError:(id)a5;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 failingWithError:(id)a2;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 failingWithError:(id)a2 forTargetOSVersion:(id)a3 forTargetBuildVersion:(id)a4;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forAssetID:(id)a2 withSelector:(id)a3 failingWithError:(id)a4;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forAssetID:(id)a2 withSelector:(id)a3 failingWithError:(id)a4 forTargetOSVersion:(id)a5 forTargetBuildVersion:(id)a6;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forAssetID:(id)a2 withSelector:(id)a3 failingWithError:(id)a4 forTargetOSVersion:(id)a5 forTargetBuildVersion:(id)a6 withOptionalCount:(unsigned long long)a7 withRequiredCount:(unsigned long long)a8 isRequired:(BOOL)a9;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forAssetSetIdentifier:(id)a2 withSelector:(id)a3 forTargetOSVersion:(id)a4 forTargetBuildVersion:(id)a5 failingWithError:(id)a6;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forClientDomainName:(id)a2 forAssetSetIdentifier:(id)a3 forAtomicInstance:(id)a4 failingWithError:(id)a5;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forPushChannelID:(id)a2 forPopulationType:(id)a3 failingWithError:(id)a4;
+ (void)recordOperation:(long long)a0 fromLayer:(long long)a1 forPushChannelID:(id)a2 forPopulationType:(id)a3 failingWithError:(id)a4;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 forAssetID:(id)a3 withSelector:(id)a4;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 fromLayer:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5 withSelectors:(id)a6 usageCount:(long long)a7 configuredCount:(long long)a8 requestedCount:(long long)a9 fromPallasCount:(long long)a10 vendingCount:(long long)a11 forClientDomainName:(id)a12 forAssetSetIdentifier:(id)a13 forAtomicInstance:(id)a14 withAddendumMessage:(id)a15 forPushChannelID:(id)a16 forPopulationType:(id)a17 forTargetOSVersion:(id)a18 forTargetBuildVersion:(id)a19 withOptionalCount:(unsigned long long)a20 withRequiredCount:(unsigned long long)a21 required:(id)a22 failingWithError:(id)a23;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 usageCount:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 usageCount:(long long)a3 forClientDomainName:(id)a4 forAssetSetIdentifier:(id)a5 forAtomicInstance:(id)a6;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 usageCount:(long long)a3 forClientDomainName:(id)a4 forAssetSetIdentifier:(id)a5 forAtomicInstance:(id)a6 withAddendumMessage:(id)a7;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 configuredCount:(long long)a3 requestedCount:(long long)a4 fromPallasCount:(long long)a5 vendingCount:(long long)a6 forClientDomainName:(id)a7 forAssetSetIdentifier:(id)a8 forAtomicInstance:(id)a9 withAddendumMessage:(id)a10;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forAssetID:(id)a3 withSelector:(id)a4;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forAssetID:(id)a3 withSelector:(id)a4 forClientDomainName:(id)a5 forTargetOSVersion:(id)a6 forTargetBuildVersion:(id)a7;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forAssetID:(id)a3 withSelector:(id)a4 forTargetOSVersion:(id)a5 forTargetBuildVersion:(id)a6;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forAssetID:(id)a3 withSelector:(id)a4 forTargetOSVersion:(id)a5 forTargetBuildVersion:(id)a6 withOptionalCount:(unsigned long long)a7 withRequiredCount:(unsigned long long)a8 isRequired:(BOOL)a9;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forAssetSetIdentifier:(id)a3 withSelector:(id)a4 forTargetOSVersion:(id)a5 forTargetBuildVersion:(id)a6;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forClientDomainName:(id)a3 forAssetSetIdentifier:(id)a4 withAddendumMessage:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forSelectors:(id)a3;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forTargetOSVersion:(id)a3 forTargetBuildVersion:(id)a4 withAddendumMessage:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 fromClient:(id)a3;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 fromClient:(id)a3 forTargetOSVersion:(id)a4 forTargetBuildVersion:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 fromClient:(id)a3 forTargetOSVersion:(id)a4 forTargetBuildVersion:(id)a5 isRequired:(BOOL)a6;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 fromClient:(id)a3 fromClientDomain:(id)a4 forAssetSetIdentifier:(id)a5 forTargetOSVersion:(id)a6 forTargetBuildVersion:(id)a7;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 fromClient:(id)a3 fromClientDomain:(id)a4 forTargetOSVersion:(id)a5 forTargetBuildVersion:(id)a6;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 usageCount:(long long)a3;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 usageCount:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 usageCount:(long long)a3 forClientDomainName:(id)a4 forAssetSetIdentifier:(id)a5 forAtomicInstance:(id)a6;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 usageCount:(long long)a3 forClientDomainName:(id)a4 forAssetSetIdentifier:(id)a5 forAtomicInstance:(id)a6 withAddendumMessage:(id)a7;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 usageCount:(long long)a3 forClientDomainName:(id)a4 forAssetSetIdentifier:(id)a5 forAtomicInstance:(id)a6 withSelector:(id)a7 withAddendumMessage:(id)a8;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 withAddendumMessage:(id)a3;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 withSelector:(id)a3;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 withSelector:(id)a3 forTargetOSVersion:(id)a4 forTargetBuildVersion:(id)a5 isRequired:(BOOL)a6;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 withSelector:(id)a3 fromClient:(id)a4 fromClientDomain:(id)a5 forTargetOSVersion:(id)a6 forTargetBuildVersion:(id)a7;

- (void).cxx_destruct;
- (id)init;
- (id)_trackerForHistoryType:(long long)a0;

@end
