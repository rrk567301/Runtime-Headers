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
- (void)bumpSession;
- (id)bindEntryInRam:(unsigned long long)a0 size:(int)a1;
- (void)compressEntryIfNeeded:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (id)priorityList;
- (BOOL)limitAmountOfMemoryUsed;
- (void)unbindEntry:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntries:(unsigned long long)a0;
- (void)unbindAll;
- (id)nextImageToUnbind;
- (id)cacheData;
- (void)setCacheData:(id)a0;
- (void)testCacheUsedConsistency;
- (id)ramNodeForSize:(int)a0 uid:(unsigned long long)a1;
- (void)removeUnbindedNode:(id)a0;
- (void)resetRamNodeCacheUsedCount:(id)a0;
- (BOOL)_unbind:(id)a0 notifyDelegate:(BOOL)a1;
- (BOOL)_bindNode:(id)a0 forCaching:(BOOL)a1;
- (void)setRamCacheLength:(unsigned int)a0;
- (unsigned int)ramCacheUsed;
- (unsigned int)ramCacheLength;

@end
