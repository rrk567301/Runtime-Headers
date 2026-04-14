@interface ThumbnailsBlastDoorInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ maxFrameCount;
    void /* unknown type, empty encoding */ bd;
}

- (void).cxx_destruct;
- (id)init;
- (id)generateImageThumbnailForFileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 error:(id *)a3;
- (id)generateImageThumbnailForFileURL:(id)a0 maxPixelDimension:(float)a1 scale:(float)a2 frameNumber:(long long)a3 error:(id *)a4;
- (void)generateMovieThumbnailForAttachmentWithFileURL:(id)a0 maxPixelDimension:(float)a1 minThumbnailPxSize:(struct CGSize { double x0; double x1; })a2 scale:(float)a3 resultHandler:(id /* block */)a4;

@end
