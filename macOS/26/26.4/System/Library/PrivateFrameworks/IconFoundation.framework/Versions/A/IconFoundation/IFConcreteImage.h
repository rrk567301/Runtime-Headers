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

- (BOOL)placeholder;
- (id)CALayer;
- (void)setIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPlaceholder:(BOOL)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGImage { } *)CGImage;
- (id)_init;
- (struct CGSize { double x0; double x1; })iconSize;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (id)finalizedIcon;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 layerData:(id)a2;
- (struct CGImage { } *)_CGImage;
- (id)layerData;
- (unsigned long long)validationFlags;
- (void).cxx_destruct;
- (void)setLayerData:(id)a0;
- (id)description;
- (void)setFinalizedIcon:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)ICRIconLayer;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (void)setValidationFlags:(unsigned long long)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 finalizedIcon:(id)a2;
- (double)scale;

@end
