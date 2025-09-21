@class TSAPdfTaggerTableLayoutSpaceContext;

@interface TSAPdfTaggerTableCellContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSAPdfTaggerTableLayoutSpaceContext *tableLayoutSpaceContext;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } cellID;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a1;

@end
