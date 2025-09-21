@class IKLinkedList, IKCacheData;
@protocol IKRamManagerDelegateProtocol;

@interface IKRamManager : NSObject {
    id<IKRamManagerDelegateProtocol> _delegate;
    IKCacheData *_cache;
    IKLinkedList *_ramBindPriorityList;
    unsigned int _ramCacheLength;
    unsigned int _ramCacheUsed;
    unsigned int _session;
    char _isUnbinding;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (unsigned int)session;
- (char)_bindNode:(id)a0 forCaching:(char)a1;
- (char)_unbind:(id)a0 notifyDelegate:(char)a1;
- (id)bindEntryInRam:(unsigned long long)a0 size:(int)a1;
- (void)bumpSession;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (id)cacheData;
- (void)compressEntryIfNeeded:(unsigned long long)a0 size:(int)a1;
- (char)limitAmountOfMemoryUsed;
- (id)nextImageToUnbind;
- (id)priorityList;
- (unsigned int)ramCacheLength;
- (unsigned int)ramCacheUsed;
- (id)ramNodeForSize:(int)a0 uid:(unsigned long long)a1;
- (void)removeUnbindedNode:(id)a0;
- (void)resetRamNodeCacheUsedCount:(id)a0;
- (void)setCacheData:(id)a0;
- (void)setRamCacheLength:(unsigned int)a0;
- (void)testCacheUsedConsistency;
- (void)unbindAll;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (void)unbindEntries:(unsigned long long)a0;
- (void)unbindEntry:(unsigned long long)a0 size:(int)a1;

@end
