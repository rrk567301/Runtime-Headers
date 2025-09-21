@interface IMMediaAnalysisBlastDoorInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ bd;
}

+ (char)supportsFeature:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)generateImagePreviewForFileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 error:(id *)a3;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 resultHandler:(id /* block */)a4;
- (void)generateMetadataforAttachmentWithfileURL:(id)a0 resultHandler:(id /* block */)a1;
- (void)generateMovieFramesForAttachmentWithFileURL:(id)a0 targetPixelWidth:(long long)a1 targetPixelHeight:(long long)a2 frameLimit:(long long)a3 uniformSampling:(char)a4 framesPerSync:(long long)a5 appliesPreferredTrackTransform:(char)a6 resultHandler:(id /* block */)a7;

@end
