@interface CalUIBoxOccurrenceTextField : CalUIAXTextField

@property struct CGSize { double width; double height; } cachedIntrinsicContentSize;
@property BOOL cachedIntrinsicContentSizeIsValid;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
