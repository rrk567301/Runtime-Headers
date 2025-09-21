@class SFDeviceAssetRequestConfiguration, NSMutableArray, NSBundle, NSError, SFDeviceAssetQuery, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceAssetTask : NSObject

@property (readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery;
@property (readonly, nonatomic) SFDeviceAssetRequestConfiguration *configuration;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) char useProcessLocalCache;
@property (readonly, nonatomic) NSMutableArray *deviceQueryParameters;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) NSBundle *matchBundle;
@property (readonly, nonatomic) NSBundle *imperfectMatchBundle;
@property (readonly, nonatomic) NSBundle *fallbackBundle;
@property (readonly, nonatomic) NSBundle *cachedBundle;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) char queryResultCalled;
@property (nonatomic) char downloadCompletionCalled;

- (void).cxx_destruct;
- (id)bundleAtURL:(id)a0 error:(id *)a1;
- (id)bundleURLFromAssetURL:(id)a0;
- (void)cancelTimeout;
- (char)completeIfPossible;
- (void)completeWithBundle:(id)a0 isFallback:(char)a1 isCached:(char)a2;
- (void)createQueryParameters;
- (id)initWithDeviceQuery:(id)a0 requestConfiguration:(id)a1 dispatchQueue:(id)a2 useProcessLocalCache:(char)a3;
- (char)updateTaskWithAssetBundleURL:(id)a0 error:(id)a1 isFallback:(char)a2 isImperfectMatch:(char)a3 isCached:(char)a4;
- (char)updateTaskWithAssetURL:(id)a0 error:(id)a1 isFallback:(char)a2 isImperfectMatch:(char)a3 isCached:(char)a4;
- (char)updateTaskWithBundle:(id)a0 error:(id)a1 isFallback:(char)a2 isImperfectMatch:(char)a3 isCached:(char)a4;

@end
