@class OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}

+ (void)applyTextStyle:(id)a0 toParagraphProperties:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)rowAtIndex:(unsigned long long)a0;
- (id)addRow;
- (unsigned long long)rowCount;
- (void)flipTableRTL;
- (void)setParentTextListStyle:(id)a0;
- (id)tableProperties;
- (id)grid;
- (id)cellAtPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (struct OADTMatrixPos { int x0; int x1; })masterPosOfPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (id)masterCellOfPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (void)flattenStyle;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;

@end
