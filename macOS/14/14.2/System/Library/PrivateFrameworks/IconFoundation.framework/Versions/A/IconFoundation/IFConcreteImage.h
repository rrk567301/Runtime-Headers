@interface IFConcreteImage : IFImage {
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
    struct CGSize { double width; double height; } _iconSize;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (struct CGSize { double x0; double x1; })size;
- (id)_init;
- (BOOL)placeholder;
- (double)scale;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)CGImage;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void)setPlaceholder:(BOOL)a0;
- (unsigned long long)validationFlags;
- (struct CGImage { } *)_CGImage;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3 iconSize:(struct CGSize { double x0; double x1; })a4;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (void)setIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)setValidationFlags:(unsigned long long)a0;

@end
