@class NSMutableDictionary, NSObject;
@protocol NEAppInfoCacheLookupDelegate, OS_dispatch_queue;

@interface NEAppInfoCache : NSObject {
    id<NEAppInfoCacheLookupDelegate> _lookupDelegate;
    NSMutableDictionary *_cachedSourceAppInfo;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
