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

- (void)setIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)CALayer;
- (void)setValidationFlags:(unsigned long long)a0;
- (void)setPlaceholder:(BOOL)a0;
- (id)ICRIconLayer;
- (BOOL)placeholder;
- (id)finalizedIcon;
- (double)scale;
- (unsigned long long)validationFlags;
- (void)setFinalizedIcon:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 layerData:(id)a2;
- (struct CGSize { double x0; double x1; })size;
- (void)setLayerData:(id)a0;
- (id)_init;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGImage { } *)_CGImage;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 finalizedIcon:(id)a2;
- (id)layerData;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;

@end
