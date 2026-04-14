@class NSIndexSet, NSArray, NSMutableIndexSet, NSMutableArray;

@interface _NSUpdateVisibleCellsContext : NSObject {
    NSMutableArray *_attributes;
    NSMutableIndexSet *_sectionIndexes;
    long long _visibleCellsRefCount;
}

@property (readonly, nonatomic) NSMutableArray *sizes;
@property (readonly, nonatomic) NSMutableArray *indexPaths;
@property (readonly, nonatomic) NSIndexSet *sectionIndexes;
@property (readonly, nonatomic) BOOL hasLeftVisibleCellsPass;
@property (readonly, nonatomic) NSArray *attributes;

- (void)didLeaveVisibleCellsPass;
- (void)addPreferredAttributes:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldInvalidate;
- (id)init;
- (id)description;
- (void)didEnterVisibleCellsPass;

@end
