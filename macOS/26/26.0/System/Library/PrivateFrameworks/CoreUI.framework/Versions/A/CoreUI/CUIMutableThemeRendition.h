@class CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface CUIMutableThemeRendition : CUIThemeRendition {
    struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *_renditionKey;
    struct CGImage { } *_image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (void)dealloc;
- (void)setName:(id)a0;
- (id)sliceInformation;
- (id)metrics;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key;
- (id)initWithCGImage:(struct CGImage { } *)a0 withDescription:(id)a1 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a2;
- (struct CGImage { } *)unslicedImage;

@end
