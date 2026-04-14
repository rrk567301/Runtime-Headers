@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_storeQueue;
    NSMutableDictionary *_bannedURLStringsToEntriesMap;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)urlStrings;
- (void)removeURLStrings:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_historyWasCleared:(id)a0;
- (id)initWithStoreURL:(id)a0 history:(id)a1;
- (BOOL)containsURLString:(id)a0;
- (void)addURLString:(id)a0;
- (void)removeAllURLStrings;
- (id)_bannedURLStringsToEntriesMap;
- (void)_writeOutBannedURLStringsAsynchronously;

@end
