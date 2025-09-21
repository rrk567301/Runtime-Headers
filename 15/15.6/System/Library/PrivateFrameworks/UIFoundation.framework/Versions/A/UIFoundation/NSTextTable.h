@interface NSTextTable : NSTextBlock <NSSecureCoding> {
    unsigned long long _numCols;
    unsigned long long _tableFlags;
    id _lcache;
    void *_tablePrimary;
    void *_tableSecondary;
}

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long numberOfColumns;
@property unsigned long long layoutAlgorithm;
@property char collapsesBorders;
@property char hidesEmptyCells;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_takeValuesFromTextBlock:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForBlock:(id)a0 layoutAtPoint:(struct CGPoint { double x0; double x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 textContainer:(id)a3 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)_setTableFlags:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textContainer:(id)a1;
- (id)_descriptionAtIndex:(unsigned long long)a0 text:(id)a1;
- (char)_missingColumnsForRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 blockIndex:(unsigned long long)a1 text:(id)a2;
- (id)_rowArrayForBlock:(id)a0 atIndex:(unsigned long long)a1 text:(id)a2 layoutManager:(id)a3 containerWidth:(double)a4 withRepetitions:(char)a5 collapseBorders:(char)a6 rowCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a7 indexInRow:(unsigned long long *)a8 startingRow:(long long *)a9 startingColumn:(long long *)a10 previousRowBlockHelper:(id *)a11;
- (unsigned long long)_tableFlags;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRectForBlock:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 textContainer:(id)a3 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)drawBackgroundForBlock:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 layoutManager:(id)a4;

@end
