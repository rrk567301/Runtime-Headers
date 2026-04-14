@class NSSet, NSMutableDictionary, NSMutableSet;

@interface WBSBackgroundImageCache : NSObject {
    NSMutableDictionary *_responseCache;
    NSMutableSet *_requests;
    NSMutableSet *_pendingLoads;
}

@property (readonly, copy, nonatomic) NSSet *requests;

- (void).cxx_destruct;
- (id)init;
- (void)removeResponseFromCacheForUUID:(id)a0;
- (void)cacheRequest:(id)a0;
- (void)cacheResponse:(id)a0 forUUID:(id)a1;
- (BOOL)pendingLoadForUUID:(id)a0;
- (void)removePendingLoadForUUID:(id)a0;
- (void)removeRequestFromCache:(id)a0;
- (id)responseForUUID:(id)a0;
- (void)setPendingLoadForUUID:(id)a0;

@end
