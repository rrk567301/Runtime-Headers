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
- (id)_init;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (struct CGImage { } *)CGImage;
- (id)layerData;
- (struct CGImage { } *)_CGImage;
- (double)scale;
- (void)setValidationFlags:(unsigned long long)a0;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (void)dealloc;
- (BOOL)placeholder;
- (id)ICRIconLayer;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void)setPlaceholder:(BOOL)a0;
- (unsigned long long)validationFlags;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 finalizedIcon:(id)a2;
- (id)finalizedIcon;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (id)CALayer;
- (void)setFinalizedIcon:(id)a0;
- (void)setLayerData:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 layerData:(id)a2;

@end
