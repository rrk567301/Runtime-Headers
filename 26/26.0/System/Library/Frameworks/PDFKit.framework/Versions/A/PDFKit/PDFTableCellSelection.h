@class PDFPage, PDFSelection;

@interface PDFTableCellSelection : NSObject {
    struct CGPDFPageLayoutTable { } *_table;
}

@property (nonatomic) struct CGPDFPageLayoutTable { } *table;
@property (retain) PDFPage *page;
@property struct CGPoint { double x; double y; } startPoint;
@property (retain) PDFSelection *selection;
@property (nonatomic) long long startCellIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionRect;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTable:(struct CGPDFPageLayoutTable { } *)a0 onPage:(id)a1;
- (BOOL)isPointInHandle:(struct CGPoint { double x0; double x1; })a0 whichHandle:(long long *)a1;

@end
