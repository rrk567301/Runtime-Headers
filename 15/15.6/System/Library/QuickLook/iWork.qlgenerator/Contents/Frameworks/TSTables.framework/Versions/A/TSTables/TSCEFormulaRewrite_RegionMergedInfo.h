@class TSCEFormulaRewrite_RegionInfo;

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } mergeSource;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *mergeRegion;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMergeRegion:(id)a0 mergeSource:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a1;

@end
