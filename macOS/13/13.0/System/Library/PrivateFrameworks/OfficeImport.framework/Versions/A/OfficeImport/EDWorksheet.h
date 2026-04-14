@class EDPane, EDWarnings, EDRowBlocks, NSMutableDictionary, EDMergedCellCollection, EDReference, EDCollection, EDColumnInfoCollection;

@interface EDWorksheet : EDSheet {
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned long long mMaxRowOutlineLevel;
    unsigned long long mMaxColumnOutlineLevel;
    BOOL mFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    NSMutableDictionary *mContentOutOfLassoBoundsCache;
    NSMutableDictionary *mMergedRows;
    NSMutableDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}

- (id)description;
- (void).cxx_destruct;
- (void)setDefaultColumnWidth:(double)a0;
- (double)defaultColumnWidth;
- (void)setup;
- (void)teardown;
- (id)pane;
- (void)setPane:(id)a0;
- (unsigned short)defaultRowHeight;
- (void)setDefaultRowHeight:(unsigned short)a0;
- (BOOL)fitToPage;
- (void)setFitToPage:(BOOL)a0;
- (id)rowBlocks;
- (id)columnInfos;
- (id)conditionalFormattings;
- (id)hyperlinks;
- (id)tables;
- (id)pivotTables;
- (id)mergedCells;
- (id)worksheetWarnings;
- (BOOL)hasMergedCells;
- (void)reduceMemoryIfPossible;
- (unsigned long long)maxRowOutlineLevel;
- (void)setMaxRowOutlineLevel:(unsigned long long)a0;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)a0;
- (unsigned long long)maxColumnOutlineLevel;
- (void)setMaxColumnOutlineLevel:(unsigned long long)a0;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)a0;
- (void)setMergedRowsRef:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (void)setMergedColsRef:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (BOOL)hasMergedRow;
- (BOOL)isRowMerged:(unsigned int)a0;
- (id)mergedRowRef:(unsigned int)a0;
- (BOOL)hasMergedCol;
- (BOOL)isColMerged:(unsigned int)a0;
- (id)mergedColRef:(unsigned int)a0;
- (id)maxCellReferencedInFormulas;
- (id)contentOutOfLassoBoundsCache;
- (id)implicitCellArea;
- (void)setImplicitCellArea:(id)a0;

@end
