@class WebHistoryItem, WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {
    WebBackForwardListPrivate *_private;
}

@property (readonly, nonatomic) WebHistoryItem *backItem;
@property (readonly, nonatomic) WebHistoryItem *currentItem;
@property (readonly, nonatomic) WebHistoryItem *forwardItem;
@property (nonatomic) int capacity;
@property (readonly, nonatomic) int backListCount;
@property (readonly, nonatomic) int forwardListCount;

+ (void)initialize;

- (void)removeItem:(id)a0;
- (void)_close;
- (id)itemAtIndex:(int)a0;
- (void)addItem:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)containsItem:(id)a0;
- (id)backListWithLimit:(int)a0;
- (id)forwardListWithLimit:(int)a0;
- (void)goBack;
- (void)goForward;
- (void)goToItem:(id)a0;
- (id)initWithBackForwardList:(void *)a0;
- (unsigned long long)pageCacheSize;
- (void)setPageCacheSize:(unsigned long long)a0;

@end
