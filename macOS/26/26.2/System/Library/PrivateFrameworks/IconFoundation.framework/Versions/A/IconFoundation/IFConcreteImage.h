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

- (unsigned long long)validationFlags;
- (void)setIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPlaceholder:(BOOL)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (double)scale;
- (void)setValidationFlags:(unsigned long long)a0;
- (id)ICRIconLayer;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 layerData:(id)a2;
- (void)setLayerData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 finalizedIcon:(id)a2;
- (id)_init;
- (void).cxx_destruct;
- (void)setFinalizedIcon:(id)a0;
- (id)CALayer;
- (id)description;
- (struct CGSize { double x0; double x1; })size;
- (struct CGImage { } *)_CGImage;
- (id)finalizedIcon;
- (BOOL)placeholder;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)layerData;
- (struct CGImage { } *)CGImage;
- (void)dealloc;

@end
