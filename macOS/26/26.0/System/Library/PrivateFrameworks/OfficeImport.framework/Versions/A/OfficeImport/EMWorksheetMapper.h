@class CMStyle, EDWorksheet, ECColumnWidthConvertor;

@interface EMWorksheetMapper : EMSheetMapper {
    CMStyle *mStyle;
    long long mMaxPopulatedColumn;
    long long mMaxPopulatedRow;
    double *mColumnGrid;
    double *mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}

@property (readonly) EDWorksheet *edWorksheet;

- (void)_initWithState:(id)a0;
- (unsigned long long)columnCount;
- (void)dealloc;
- (BOOL)isVisible;
- (int)width;
- (int)height;
- (void).cxx_destruct;
- (double)defaultColumnWidth;
- (void)mapWorksheetClassesAtTableNode:(id)a0;
- (double *)rowGrid;
- (double *)columnGrid;
- (id)columnWidthConvertor;
- (void)countRowsAndColumnsWithState:(id)a0;
- (double)defaultRowHeight;
- (id)initWithEDWorksheet:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapColumnInfosAt:(id)a0 withState:(id)a1;
- (void)mapDrawablesAt:(id)a0 withState:(id)a1;
- (void)mapTableAt:(id)a0 withState:(id)a1;
- (long long)maxRowNumber;
- (struct CGSize { double x0; double x1; })preprocessDrawableSizeWithState:(id)a0;
- (int)preprocessHeightWithState:(id)a0;
- (struct CGSize { double x0; double x1; })preprocessSizeWithState:(id)a0;
- (int)preprocessWidthWithState:(id)a0;
- (void)readHyperlinksWithState:(id)a0;
- (void)setRowGrid;
- (double)xlColumnWidthToPoints:(double)a0;

@end
