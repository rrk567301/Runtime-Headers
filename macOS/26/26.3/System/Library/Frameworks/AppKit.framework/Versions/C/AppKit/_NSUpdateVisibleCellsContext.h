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

- (void)didEnterVisibleCellsPass;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)didLeaveVisibleCellsPass;
- (BOOL)shouldInvalidate;
- (void)addPreferredAttributes:(id)a0;

@end
