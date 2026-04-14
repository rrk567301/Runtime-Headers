@class CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface CUIMutableThemeRendition : CUIThemeRendition {
    struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *_renditionKey;
    struct CGImage { } *_image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (id)metrics;
- (struct CGImage { } *)unslicedImage;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key;
- (id)initWithCGImage:(struct CGImage { } *)a0 withDescription:(id)a1 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a2;
- (void)dealloc;
- (id)sliceInformation;
- (void)setName:(id)a0;

@end
