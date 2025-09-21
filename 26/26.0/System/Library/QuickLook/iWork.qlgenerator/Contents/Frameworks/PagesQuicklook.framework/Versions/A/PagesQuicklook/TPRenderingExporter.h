@class TPPaginatedPageController, NSMutableArray, TPPdfHyperlinkController;

@interface TPRenderingExporter : TSARenderingExporter

@property (retain, nonatomic) NSMutableArray *outputPageList;
@property (retain, nonatomic) TPPdfHyperlinkController *hyperlinkController;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long internalPageCount;
@property (nonatomic) BOOL didLimitPageLayout;
@property (retain, nonatomic) TPPaginatedPageController *pageController;
@property (nonatomic) BOOL tornDown;
@property (nonatomic) unsigned long long startPageIndex;
@property (nonatomic) unsigned long long lastPageIndex;
@property (nonatomic) long long lastPageIndexForLayout;
@property (nonatomic) BOOL includePencilAnnotations;
@property (nonatomic) BOOL includeComments;
@property (nonatomic) BOOL includeBackgrounds;

- (void)setOptions:(id)a0;
- (void)setup;
- (void)teardown;
- (unsigned long long)pageCount;
- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unscaledClipRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRect;
- (BOOL)incrementPage;
- (BOOL)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(BOOL)a3;
- (id)currentInfos;
- (BOOL)preparePage:(unsigned long long)a0;
- (double)progressForCurrentPage;
- (BOOL)shouldSuppressBackgroundsForCurrentPage;
- (double)totalProgess;
- (void)invalidateOutputPageList;
- (void)p_addHyperLinksInContext:(struct CGContext { } *)a0 forCanvas:(id)a1;
- (void)setupPencilAnnotationsAndHyperlinks;

@end
