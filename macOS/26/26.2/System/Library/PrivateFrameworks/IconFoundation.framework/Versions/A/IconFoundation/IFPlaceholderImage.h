@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (unsigned long long)validationFlags;
- (void)setPlaceholder:(BOOL)a0;
- (double)scale;
- (void)setValidationFlags:(unsigned long long)a0;
- (id)ICRIconLayer;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (id)validationToken;
- (BOOL)placeholder;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)layerData;
- (struct CGImage { } *)CGImage;

@end
