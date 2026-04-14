@class NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetHistoryTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *protectionQueue;
@property (readonly, nonatomic) long long historyType;
@property (nonatomic) BOOL loadedFromPersistedState;
@property (nonatomic) long long currentBucketFileIndex;
@property (nonatomic) long long currentBucketFilesystemBytes;
@property (nonatomic) long long maximumBucketFilesystemBytes;

+ (id)currentTime;
+ (id)operationName:(long long)a0;
+ (id)paddedNameForHistoryLayer:(long long)a0;
+ (id)paddedNameForClient:(id)a0;
+ (id)paddedNameForErrorDomain:(id)a0;
+ (id)paddedNameForErrorCode:(id)a0;
+ (id)selectorNameForSelector:(id)a0;
+ (id)newBucketFilename:(long long)a0 forBucketIndex:(long long)a1;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (void)loadPersistedState;
- (id)initForHistoryType:(long long)a0 withMaximumFilesystemBytes:(long long)a1 usingProtectionQueue:(id)a2;
- (void)recordHistoryEntry:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 fromLayer:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5 usageCount:(long long)a6 forAtomicInstance:(id)a7 ofAssetSet:(id)a8 failingWithError:(id)a9;
- (BOOL)makeSureHistoryDirectoryExists;
- (void)loadBucketIndex;
- (void)createBucketIndexFile;
- (void)createEmptyBucketFileForIndex:(long long)a0 settingCurrentBucketBytes:(BOOL)a1;
- (void)verifyAllOtherBucketFilesExist;
- (long long)recordFormattedHistoryEntry:(id)a0 toBucketFilename:(id)a1 settingCurrentBucketBytes:(BOOL)a2;
- (id)newBucketIndexFilename;
- (id)historyTypeName;

@end
