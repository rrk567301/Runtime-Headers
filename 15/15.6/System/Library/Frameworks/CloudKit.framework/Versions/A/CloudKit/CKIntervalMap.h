@class CKIntervalMapRangeMapContainer;

@interface CKIntervalMap : NSObject

@property (readonly, nonatomic) CKIntervalMapRangeMapContainer *rangeMap;
@property (nonatomic) char dirty;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)containsIndex:(unsigned long long)a0;
- (char)containsIndexes:(id)a0;
- (id)allIndexes;
- (void)enumerateObjectsForIndexes:(id)a0 usingBlock:(id /* block */)a1;
- (void)maintainInvariants;

@end
