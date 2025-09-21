@class CUIRenditionSliceInformation, CUIRenditionKey, CUIRenditionMetrics, CUIStructuredThemeStore;

@interface _CUIInternalLinkRendition : CUIThemeRendition {
    unsigned int _nimages;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect[16];
    struct CGImage *_image[16];
    struct CGImage { } *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIRenditionKey *_referenceKey;
    struct CGSize { double width; double height; } _originalUncroppedSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alphaCroppedFrame;
}

- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })originalUncroppedSize;
- (BOOL)isScaled;
- (void)dealloc;
- (BOOL)isInternalLink;
- (id)imageForSliceIndex:(long long)a0;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1 version:(unsigned int)a2;
- (struct CGSize { double x0; double x1; })unslicedSize;
- (id)maskForSliceIndex:(long long)a0;
- (id)properties;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alphaCroppedRect;
- (BOOL)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0 version:(unsigned int)a1;
- (id)_sourceRendition;
- (BOOL)edgesOnly;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_destinationFrame;
- (struct CGImage { } *)unslicedImage;
- (int)bitmapEncoding;
- (void)_setStructuredThemeStore:(id)a0;
- (id)linkingToRendition;
- (void).cxx_destruct;
- (id)data;
- (int)pixelFormat;

@end
