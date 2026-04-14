@class IKLinkedList, IKCacheData;
@protocol IKRamManagerDelegateProtocol;

@interface IKRamManager : NSObject {
    id<IKRamManagerDelegateProtocol> _delegate;
    IKCacheData *_cache;
    IKLinkedList *_ramBindPriorityList;
    unsigned int _ramCacheLength;
    unsigned int _ramCacheUsed;
    unsigned int _session;
    BOOL _isUnbinding;
}

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (unsigned int)session;
- (unsigned int)ramCacheLength;
- (id)nextImageToUnbind;
- (id)bindEntryInRam:(unsigned long long)a0 size:(int)a1;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (void)bumpSession;
- (void)setCacheData:(id)a0;
- (void)unbindEntry:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntries:(unsigned long long)a0;
- (void)unbindAll;
- (void)compressEntryIfNeeded:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (BOOL)limitAmountOfMemoryUsed;
- (id)cacheData;
- (id)priorityList;
- (void)resetRamNodeCacheUsedCount:(id)a0;
- (void)removeUnbindedNode:(id)a0;
- (unsigned int)ramCacheUsed;
- (BOOL)_unbind:(id)a0 notifyDelegate:(BOOL)a1;
- (BOOL)_bindNode:(id)a0 forCaching:(BOOL)a1;
- (void)testCacheUsedConsistency;
- (id)ramNodeForSize:(int)a0 uid:(unsigned long long)a1;
- (void)setRamCacheLength:(unsigned int)a0;

@end
