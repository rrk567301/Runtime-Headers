@class CMFNotificationObserver, NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}

@property (readonly, nonatomic) CMFNotificationObserver *blockListUpdateObserver;

- (long long)cachedResponseForItem:(id)a0;
- (void)setResponse:(BOOL)a0 forItem:(id)a1;
- (void)syncListEmptyState;
- (void).cxx_destruct;
- (id)init;
- (void)_blockListChanged;
- (void)removeItemFromCache:(id)a0;

@end
