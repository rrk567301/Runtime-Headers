@class CMStyle, EDWorksheet, ECColumnWidthConvertor;

@interface EMWorksheetMapper : EMSheetMapper {
    EDWorksheet *edWorksheet;
    CMStyle *mStyle;
    long long mMaxPopulatedColumn;
    long long mMaxPopulatedRow;
    double *mColumnGrid;
    double *mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)width;
- (int)height;
- (unsigned long long)columnCount;
- (BOOL)isVisible;
- (double)defaultColumnWidth;
- (id)columnWidthConvertor;
- (long long)maxRowNumber;
- (double)defaultRowHeight;
- (void)mapAt:(id)a0 withState:(id)a1;
- (int)preprocessWidthWithState:(id)a0;
- (int)preprocessHeightWithState:(id)a0;
- (double *)rowGrid;
- (double *)columnGrid;
- (struct CGSize { double x0; double x1; })preprocessSizeWithState:(id)a0;
- (id)initWithEDWorksheet:(id)a0 parent:(id)a1;
- (void)countRowsAndColumnsWithState:(id)a0;
- (void)setRowGrid;
- (double)xlColumnWidthToPoints:(double)a0;
- (void)_initWithState:(id)a0;
- (void)readHyperlinksWithState:(id)a0;
- (void)mapTableAt:(id)a0 withState:(id)a1;
- (void)mapDrawablesAt:(id)a0 withState:(id)a1;
- (struct CGSize { double x0; double x1; })preprocessDrawableSizeWithState:(id)a0;
- (void)mapColumnInfosAt:(id)a0 withState:(id)a1;
- (void)mapWorksheetClassesAtTableNode:(id)a0;

@end
