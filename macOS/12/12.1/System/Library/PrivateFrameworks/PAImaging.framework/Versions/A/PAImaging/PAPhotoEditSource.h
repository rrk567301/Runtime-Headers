@interface PAPhotoEditSource : PLPhotoEditSource {
    BOOL _shouldCacheRaster;
}

- (id)newSourceWithURL:(id)a0 type:(id)a1 useEmbeddedPreview:(BOOL)a2;
- (id)initWithURL:(id)a0 type:(id)a1 size:(struct CGSize { double x0; double x1; })a2 image:(id)a3 useEmbeddedPreview:(BOOL)a4;

@end
