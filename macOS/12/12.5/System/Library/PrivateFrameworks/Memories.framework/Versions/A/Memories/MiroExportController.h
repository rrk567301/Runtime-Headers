@class NSDictionary, NSImage, PMTitleSubtitleView;

@interface MiroExportController : ReaderWriterExportController

@property (retain, nonatomic) PMTitleSubtitleView *titleView;
@property (copy, nonatomic) NSDictionary *titleInformation;
@property (retain, nonatomic) NSImage *posterImage;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)thumbnailImage;
- (struct CGSize { double x0; double x1; })exportSize;
- (id)titleLayerForVideoComposition:(id)a0;
- (void)createMovieController;
- (void)_setupMovieController;
- (id)_compositionForExport;

@end
