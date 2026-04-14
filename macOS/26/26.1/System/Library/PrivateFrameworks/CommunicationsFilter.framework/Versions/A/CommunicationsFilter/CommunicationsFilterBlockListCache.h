@class CMFNotificationObserver, NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}

@property (readonly, nonatomic) CMFNotificationObserver *blockListUpdateObserver;

- (void)removeItemFromCache:(id)a0;
- (long long)cachedResponseForItem:(id)a0;
- (void)syncListEmptyState;
- (void)setResponse:(BOOL)a0 forItem:(id)a1;
- (void).cxx_destruct;
- (void)_blockListChanged;
- (id)init;

@end
