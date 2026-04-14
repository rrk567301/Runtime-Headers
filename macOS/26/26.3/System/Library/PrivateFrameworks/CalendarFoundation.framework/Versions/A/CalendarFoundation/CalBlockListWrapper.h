@class CalAccumulatingQueue;
@protocol CalBlockList;

@interface CalBlockListWrapper : NSObject <CalBlockList> {
    void /* unknown type, empty encoding */ blockList;
    void /* unknown type, empty encoding */ knownBlockedLock;
}

@property (class, nonatomic, readonly) id<CalBlockList> sharedBlockList;

@property (nonatomic, readonly) CalAccumulatingQueue *cacheUpdatingQueue;
@property (nonatomic, readonly) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (void)batchCachedEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (void)batchLookupEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)cachedBlockedWithEmail:(id)a0;
- (BOOL)cachedBlockedWithPhoneNumber:(id)a0;
- (BOOL)isBlockedWithEmail:(id)a0;
- (BOOL)isBlockedWithPhoneNumber:(id)a0;
- (void)queueUpdateCacheWithEmails:(id)a0 phones:(id)a1;
- (void)updateCacheNowWithEmails:(id)a0 phones:(id)a1;

@end
