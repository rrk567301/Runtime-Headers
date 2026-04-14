@class NSImage;

@interface AMImageTextCell : AMTextFieldCell {
    NSImage *_image;
}

- (id)image;
- (BOOL)isEditable;
- (void)setImage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)isSelectable;
- (void)selectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 editor:(id)a2 delegate:(id)a3 start:(long long)a4 length:(long long)a5;

@end
