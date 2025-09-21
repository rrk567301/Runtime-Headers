@interface PLPhotoEditSource : PLEditSource {
    char _isRAWSource;
}

- (id)initWithURL:(id)a0 type:(id)a1 image:(id)a2 useEmbeddedPreview:(char)a3;
- (char)isRAWSource;
- (id)newSourceWithURL:(id)a0 type:(id)a1 useEmbeddedPreview:(char)a2;
- (void)setURL:(id)a0 type:(id)a1 image:(id)a2 useEmbeddedPreview:(char)a3;

@end
