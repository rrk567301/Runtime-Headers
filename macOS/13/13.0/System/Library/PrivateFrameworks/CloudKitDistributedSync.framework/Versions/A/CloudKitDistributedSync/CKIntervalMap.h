@class CKIntervalMapRangeMapContainer;

@interface CKIntervalMap : NSObject

@property (readonly, nonatomic) CKIntervalMapRangeMapContainer *rangeMap;
@property (nonatomic) BOOL dirty;

- (id)description;
- (id)init;
- (BOOL)containsIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)containsIndexes:(id)a0;
- (id)allIndexes;
- (void)maintainInvariants;
- (void)enumerateObjectsForIndexes:(id)a0 usingBlock:(id /* block */)a1;

@end
