@class NSMutableArray;

@interface SCRChildrenHashCache : NSObject

@property (retain, nonatomic) NSMutableArray *childrenHashCache;

- (void)clearCache;
- (id)init;
- (void).cxx_destruct;
- (void)addCachedElement:(id)a0 childrenHash:(unsigned long long)a1;
- (BOOL)didChildrenHashChange;

@end
