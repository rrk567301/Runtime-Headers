@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSAccountStoreCache : NSObject

@property (class, readonly) NSMutableDictionary *cache;
@property (class, readonly) NSObject<OS_dispatch_queue> *cacheAccessQueue;

+ (id)accountStoreForMediaType:(id)a0;
+ (id)mediaTypeForAccountStore:(id)a0;
+ (void)_resetAccountStoreCache;

@end
