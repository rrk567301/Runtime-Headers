@class TSDImager, NSString, TSUProgress, TSAPdfTagger, NSDictionary, TSADocumentRoot, NSObject, TSUProgressContext, TSDBitmapRenderingQualityInfo;
@protocol OS_dispatch_queue, TSARenderingExporterDelegate;

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {
    TSADocumentRoot *mDocumentRoot;
    TSDImager *mImager;
    NSObject<OS_dispatch_queue> *mImagerAccessLock;
    char mIsCancelled;
    char mIsQuit;
    char mPaginate;
    char mDoesDrawAllPages;
    NSDictionary *mOptions;
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
    TSAPdfTagger *mPdfTagger;
}

@property (readonly) NSObject<TSARenderingExporterDelegate> *renderingExporterDelegate;
@property (retain) TSUProgressContext *progressContext;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unscaledClipRect;
@property (readonly, nonatomic) double progressForCurrentPage;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (nonatomic) char paginate;
@property (readonly, nonatomic) char isCancelled;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) char needsSupplementalFiles;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly, nonatomic) char isExportSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pdfTaggerClass;

- (void).cxx_destruct;
- (void)cancel;
- (void)setOptions:(id)a0;
- (void)teardown;
- (void)quit;
- (void)setup;
- (id)documentRoot;
- (char)isQuit;
- (char)exportToURL:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)initWithDocumentRoot:(id)a0;
- (char)incrementPage;
- (char)drawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(char)a3;
- (id)bitmapRenderingQualityInfo;
- (id)currentInfos;
- (char)exportToURL:(id)a0 pageNumber:(unsigned long long)a1 delegate:(id)a2 error:(id *)a3;
- (id)initWithDocumentRoot:(id)a0 imager:(id)a1;
- (id)p_renderingExporterDelegate;
- (char)preparePage:(unsigned long long)a0;
- (void)drawCurrentPageWithContext:(struct CGContext { } *)a0 returnSuccess:(char *)a1;
- (Class)imagerClass;
- (void)performBlockWithImager:(id /* block */)a0;
- (char)setInfosToCurrentPage;
- (char)shouldSuppressBackgroundsForCurrentPage;
- (double)totalProgess;
- (void)drawAllPagesWithContext:(struct CGContext { } *)a0 returnSuccess:(char *)a1;
- (void)finalizeContext:(struct CGContext { } *)a0;
- (id)imager;
- (void)p_drawCurrentPageWithContext:(struct CGContext { } *)a0 returnSuccess:(char *)a1 createPage:(char)a2;
- (char)p_exportToURL:(id)a0 pageNumber:(unsigned long long)a1 delegate:(id)a2 error:(id *)a3;
- (id)pdfTagger;
- (char)prefersHDRImager;
- (char)setUpAndDrawCurrentPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(char)a3;
- (void)setUpPdfTaggerWithOptions:(id)a0;
- (void)waitForRecalcToFinish;

@end
