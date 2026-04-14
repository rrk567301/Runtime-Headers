@interface IKReflectionCell : IKImageBrowserCell {
    BOOL _reflectImageFrame;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } reflectionFrame;

- (unsigned long long)imageAlignment;
- (void)drawImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)drawSelectionOnTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;
- (void)drawSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })IKReflectionSelectionFrame;

@end
