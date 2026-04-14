@class NSMutableArray;

@interface SCRChildrenHashCache : NSObject

@property (retain, nonatomic) NSMutableArray *childrenHashCache;

- (void)clearCache;
- (void).cxx_destruct;
- (id)init;
- (void)addCachedElement:(id)a0 childrenHash:(unsigned long long)a1;
- (BOOL)didChildrenHashChange;

@end
