@interface PAAVItemView : PAItemView {
    struct CGImage { } *_thumbnail;
}

- (void)dealloc;
- (id)init;
- (BOOL)isOpaque;
- (void)setThumbnail:(struct CGImage { } *)a0;
- (struct CGImage { } *)thumbnail;

@end
