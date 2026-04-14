@class NSString;

@interface MPMediaItemAnimatedArtwork : NSObject {
    id /* block */ _previewImageRequestHandler;
    id /* block */ _videoAssetFileURLRequestHandler;
}

@property (readonly, copy, nonatomic) NSString *artworkID;

+ (id)imageEncodeQueue;
+ (void)validateAssetFileURL:(id)a0 forRequestedSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (id)validatePreviewImage:(id)a0 forRequestedSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)initWithArtworkID:(id)a0 previewImageRequestHandler:(id /* block */)a1 videoAssetFileURLRequestHandler:(id /* block */)a2;
- (id)mrAnimatedArtwork;

@end
