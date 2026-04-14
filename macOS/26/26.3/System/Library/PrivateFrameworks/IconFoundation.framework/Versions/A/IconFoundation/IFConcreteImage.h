@class NSData, ICRIconLayer, ICRFinalizedIcon;

@interface IFConcreteImage : IFImage {
    BOOL _placeholder;
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    NSData *_layerData;
    ICRIconLayer *_ICRIconLayer;
    ICRFinalizedIcon *_finalizedIcon;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
    struct CGSize { double width; double height; } _iconSize;
}

- (void)setLayerData:(id)a0;
- (void)setPlaceholder:(BOOL)a0;
- (void)setFinalizedIcon:(id)a0;
- (struct CGImage { } *)CGImage;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (id)CALayer;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)description;
- (BOOL)placeholder;
- (id)finalizedIcon;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 layerData:(id)a2;
- (void)setIconSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (id)_init;
- (id)layerData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })iconSize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)validationFlags;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 finalizedIcon:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (double)scale;
- (id)ICRIconLayer;
- (struct CGImage { } *)_CGImage;
- (void)setValidationFlags:(unsigned long long)a0;

@end
