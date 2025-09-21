@class CMFNotificationObserver, NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    char _listIsEmpty;
}

@property (readonly, nonatomic) CMFNotificationObserver *blockListUpdateObserver;

- (id)init;
- (void).cxx_destruct;
- (void)_blockListChanged;
- (long long)cachedResponseForItem:(id)a0;
- (void)removeItemFromCache:(id)a0;
- (void)setResponse:(char)a0 forItem:(id)a1;
- (void)syncListEmptyState;

@end
