@class NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetHistoryTracker : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *protectionQueue;
@property (readonly, nonatomic) long long historyType;
@property (nonatomic) BOOL loadedFromPersistedState;
@property (nonatomic) long long currentBucketFileIndex;
@property (nonatomic) long long currentBucketFilesystemBytes;
@property (nonatomic) long long maximumBucketFilesystemBytes;

+ (id)currentTime;
+ (id)layerName:(long long)a0;
+ (id)nameForHistoryType:(long long)a0;
+ (id)newBucketFilename:(long long)a0 forBucketIndex:(long long)a1;
+ (id)operationName:(long long)a0;
+ (id)paddedNameForClient:(id)a0;
+ (id)paddedNameForErrorCode:(id)a0;
+ (id)paddedNameForErrorDomain:(id)a0;
+ (id)paddedNameForHistoryLayer:(long long)a0;
+ (id)selectorNameForSelector:(id)a0;
+ (id)summaryOfAssetSelectors:(id)a0;

- (void).cxx_destruct;
- (id)summary;
- (void)loadPersistedState;
- (id)description;
- (id)historyTypeName;
- (void)loadBucketIndex;
- (void)createBucketIndexFile;
- (void)createEmptyBucketFileForIndex:(long long)a0 settingCurrentBucketBytes:(BOOL)a1;
- (id)initForHistoryType:(long long)a0 withMaximumFilesystemBytes:(long long)a1 usingProtectionQueue:(id)a2;
- (BOOL)makeSureHistoryDirectoryExists;
- (id)newBucketIndexFilename;
- (long long)recordFormattedHistoryEntry:(id)a0 toBucketFilename:(id)a1 settingCurrentBucketBytes:(BOOL)a2;
- (void)recordHistoryEntry:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 fromLayer:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5 withSelectors:(id)a6 usageCount:(long long)a7 configuredCount:(long long)a8 requestedCount:(long long)a9 fromPallasCount:(long long)a10 vendingCount:(long long)a11 forClientDomainName:(id)a12 forAssetSetIdentifier:(id)a13 forAtomicInstance:(id)a14 withAddendumMessage:(id)a15 forPushChannelID:(id)a16 forPopulationType:(id)a17 forTargetOSVersion:(id)a18 forTargetBuildVersion:(id)a19 withOptionalCount:(unsigned long long)a20 withRequiredCount:(unsigned long long)a21 isRequired:(id)a22 failingWithError:(id)a23;
- (void)verifyAllOtherBucketFilesExist;

@end
