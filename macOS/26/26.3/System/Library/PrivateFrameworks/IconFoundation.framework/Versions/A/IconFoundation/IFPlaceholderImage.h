@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (void)setPlaceholder:(BOOL)a0;
- (id)initWithImage:(id)a0;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)placeholder;
- (struct CGSize { double x0; double x1; })size;
- (id)validationToken;
- (id)layerData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })iconSize;
- (unsigned long long)validationFlags;
- (double)scale;
- (id)ICRIconLayer;
- (void)setValidationFlags:(unsigned long long)a0;

@end
