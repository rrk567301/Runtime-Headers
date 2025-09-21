@class NSIndexSet, NSArray, NSMutableIndexSet, NSMutableArray;

@interface _NSUpdateVisibleCellsContext : NSObject {
    NSMutableArray *_attributes;
    NSMutableIndexSet *_sectionIndexes;
    long long _visibleCellsRefCount;
}

@property (readonly, nonatomic) NSMutableArray *sizes;
@property (readonly, nonatomic) NSMutableArray *indexPaths;
@property (readonly, nonatomic) NSIndexSet *sectionIndexes;
@property (readonly, nonatomic) char hasLeftVisibleCellsPass;
@property (readonly, nonatomic) NSArray *attributes;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addPreferredAttributes:(id)a0;
- (void)didEnterVisibleCellsPass;
- (void)didLeaveVisibleCellsPass;
- (char)shouldInvalidate;

@end
