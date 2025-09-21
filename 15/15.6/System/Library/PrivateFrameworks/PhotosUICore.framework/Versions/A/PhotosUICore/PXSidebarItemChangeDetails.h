@class PXArrayChangeDetails, NSArray, NSIndexSet, PXDataSection;

@interface PXSidebarItemChangeDetails : NSObject

@property (readonly, nonatomic) PXArrayChangeDetails *arrayChangeDetails;
@property (readonly, nonatomic) PXDataSection *previousDataSection;
@property (readonly, nonatomic) NSArray *removedItems;
@property (readonly, nonatomic) NSArray *changedItems;
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) char hasMoves;
@property (readonly, nonatomic) char hasContentChanges;
@property (readonly, nonatomic) char needsReload;

+ (void)makeArrayIndexMovesIncremental:(struct { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)changedIndexes;
- (void)enumerateMovedIndexesUsingBlock:(id /* block */)a0;
- (id)initWithArrayChangeDetails:(id)a0 previousDataSection:(id)a1;

@end
