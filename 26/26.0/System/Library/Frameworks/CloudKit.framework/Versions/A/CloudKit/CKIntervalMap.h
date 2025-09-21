@class CKIntervalMapRangeMapContainer;

@interface CKIntervalMap : NSObject

@property (readonly, nonatomic) CKIntervalMapRangeMapContainer *rangeMap;
@property (nonatomic) BOOL dirty;

- (id)init;
- (id)allIndexes;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsIndex:(unsigned long long)a0;
- (BOOL)containsIndexes:(id)a0;
- (void)enumerateObjectsForIndexes:(id)a0 usingBlock:(id /* block */)a1;
- (void)maintainInvariants;

@end
