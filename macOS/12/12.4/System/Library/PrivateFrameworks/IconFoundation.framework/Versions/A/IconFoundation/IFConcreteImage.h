@interface IFConcreteImage : IFImage {
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (id)description;
- (id)_init;
- (BOOL)placeholder;
- (double)scale;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGImage { } *)CGImage;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPlaceholder:(BOOL)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (unsigned long long)validationFlags;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (struct CGImage { } *)_CGImage;
- (void)setValidationFlags:(unsigned long long)a0;

@end
