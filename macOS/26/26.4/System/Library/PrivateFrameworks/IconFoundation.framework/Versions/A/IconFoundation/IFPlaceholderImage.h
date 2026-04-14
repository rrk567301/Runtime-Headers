@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (BOOL)placeholder;
- (void)setPlaceholder:(BOOL)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)initWithImage:(id)a0;
- (struct CGImage { } *)CGImage;
- (id)validationToken;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)layerData;
- (unsigned long long)validationFlags;
- (void).cxx_destruct;
- (id)ICRIconLayer;
- (struct CGSize { double x0; double x1; })size;
- (void)setValidationFlags:(unsigned long long)a0;
- (double)scale;

@end
