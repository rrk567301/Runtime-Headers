@class CMFNotificationObserver, NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}

@property (readonly, nonatomic) CMFNotificationObserver *blockListUpdateObserver;

- (void)removeItemFromCache:(id)a0;
- (id)init;
- (void)syncListEmptyState;
- (void)_blockListChanged;
- (void)setResponse:(BOOL)a0 forItem:(id)a1;
- (long long)cachedResponseForItem:(id)a0;
- (void).cxx_destruct;

@end
