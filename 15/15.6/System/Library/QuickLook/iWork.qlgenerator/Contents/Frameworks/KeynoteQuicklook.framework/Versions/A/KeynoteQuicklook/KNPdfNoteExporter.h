@class NSString, KNSlideLayoutPrintHelper;

@interface KNPdfNoteExporter : KNPdfExporter <KNSlideLayoutPrintHelperDataSource> {
    char _isDrawingNote;
    KNSlideLayoutPrintHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)pageCount;
- (char)incrementPage;
- (char)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(char)a3;
- (id)currentInfos;
- (char)drawMonoPageExtraContentInContext:(struct CGContext { } *)a0 scaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })monoSlideRectFromScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outScaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)p_preparePrintHelperIfNeeded;
- (unsigned long long)printHelper:(id)a0 commentsPageCountForSlideNode:(id)a1;
- (id)printHelper:(id)a0 noteSegmentsForSlideNode:(id)a1;
- (id)slideNodesForPrintHelper:(id)a0;
- (char)supportsPrintingComments;

@end
