@interface IKCollageCell : IKImageBrowserCell

- (void)drawImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrame;
- (void)drawPlaceHolder;
- (void)drawSelection;
- (void)drawSelectionOnTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrame;
- (void)drawShadow;
- (void)drawImageOutline;
- (void)pushTransform;
- (int)photoBorder;
- (void)popTransform;
- (void)drawPhotoBackground;

@end
