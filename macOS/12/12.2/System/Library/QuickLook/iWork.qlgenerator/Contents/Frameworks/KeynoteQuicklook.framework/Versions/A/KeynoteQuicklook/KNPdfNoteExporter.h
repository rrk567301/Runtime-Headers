@class NSString, KNSlideLayoutPrintHelper;

@interface KNPdfNoteExporter : KNPdfExporter <KNSlideLayoutPrintHelperDataSource> {
    BOOL _isDrawingNote;
    KNSlideLayoutPrintHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)pageCount;
- (BOOL)incrementPage;
- (id)slideNodesForPrintHelper:(id)a0;
- (unsigned long long)printHelper:(id)a0 commentsPageCountForSlideNode:(id)a1;
- (id)printHelper:(id)a0 noteSegmentsForSlideNode:(id)a1;
- (id)currentInfos;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (void)p_preparePrintHelperIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_slideRectFromUnscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewScale:(double)a1 outScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (BOOL)supportsPrintingComments;

@end
