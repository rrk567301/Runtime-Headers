@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (struct CGImage { } *)CGImage;
- (id)layerData;
- (double)scale;
- (id)validationToken;
- (void)setValidationFlags:(unsigned long long)a0;
- (id)initWithImage:(id)a0;
- (BOOL)placeholder;
- (id)ICRIconLayer;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void)setPlaceholder:(BOOL)a0;
- (unsigned long long)validationFlags;
- (struct CGSize { double x0; double x1; })iconSize;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;

@end
