@class CMFNotificationObserver, NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}

@property (readonly, nonatomic) CMFNotificationObserver *blockListUpdateObserver;

- (void)_blockListChanged;
- (void)setResponse:(BOOL)a0 forItem:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (long long)cachedResponseForItem:(id)a0;
- (void)syncListEmptyState;
- (void)removeItemFromCache:(id)a0;

@end
