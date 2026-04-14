@interface PLPhotoEditSource : PLEditSource {
    BOOL _isRAWSource;
}

- (id)initWithURL:(id)a0 type:(id)a1 image:(id)a2 useEmbeddedPreview:(BOOL)a3;
- (BOOL)isRAWSource;
- (void)setURL:(id)a0 type:(id)a1 image:(id)a2 useEmbeddedPreview:(BOOL)a3;
- (id)newSourceWithURL:(id)a0 type:(id)a1 useEmbeddedPreview:(BOOL)a2;

@end
