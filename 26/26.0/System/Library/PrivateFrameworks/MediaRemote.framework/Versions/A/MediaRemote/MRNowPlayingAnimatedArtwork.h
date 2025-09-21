@interface MRNowPlayingAnimatedArtwork : NSObject {
    id /* block */ _previewFrameDataRequestHandler;
    id /* block */ _artworkAssetFileURLRequestHandler;
}

- (void).cxx_destruct;
- (void)artworkAssetFileURLWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)initWithPreviewFrameDataRequestHandler:(id /* block */)a0 artworkAssetFileURLRequestHandler:(id /* block */)a1;
- (void)previewFrameDataWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
