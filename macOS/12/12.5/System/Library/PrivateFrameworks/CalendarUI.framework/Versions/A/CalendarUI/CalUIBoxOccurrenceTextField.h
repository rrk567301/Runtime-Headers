@interface CalUIBoxOccurrenceTextField : CalUIAXTextField

@property struct CGSize { double width; double height; } cachedIntrinsicContentSize;
@property BOOL cachedIntrinsicContentSizeIsValid;

- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
