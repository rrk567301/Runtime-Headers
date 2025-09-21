@class NSString, TSUProgress;

@interface TPPreviewExporter : TPRenderingExporter <TSKImageExporter>

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) char scaleToFit;
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

- (id)p_renderingExporterDelegate;

@end
