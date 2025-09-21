@class NSError, NSURL, MSVArtworkColorAnalysis;

@interface MPArtworkColorAnalysisOperation : NSOperation {
    NSURL *_sourceURL;
    MSVArtworkColorAnalysis *_colorAnalysis;
    NSError *_error;
}

@property (readonly, nonatomic) MSVArtworkColorAnalysis *colorAnalysis;
@property (readonly, nonatomic) NSError *error;

- (void)main;
- (void)cancel;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)_createImageFromSource:(struct CGImageSource { } *)a0 size:(unsigned long long)a1;
- (struct CGImageSource { } *)_createImageFromURL:(id)a0;

@end
