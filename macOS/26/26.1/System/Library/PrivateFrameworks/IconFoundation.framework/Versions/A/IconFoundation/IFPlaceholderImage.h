@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (struct CGImage { } *)CGImage;
- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGSize { double x0; double x1; })iconSize;
- (void)setValidationFlags:(unsigned long long)a0;
- (void)setPlaceholder:(BOOL)a0;
- (id)ICRIconLayer;
- (BOOL)placeholder;
- (id)validationToken;
- (double)scale;
- (unsigned long long)validationFlags;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (id)layerData;

@end
