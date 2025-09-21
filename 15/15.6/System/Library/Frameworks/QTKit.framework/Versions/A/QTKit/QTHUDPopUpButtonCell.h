@class QTHUDPopUpButtonCellButtonCell;

@interface QTHUDPopUpButtonCell : NSPopUpButtonCell {
    QTHUDPopUpButtonCellButtonCell *_buttonCell;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (void)setState:(long long)a0;
- (void)setControlView:(id)a0;
- (void)setHighlighted:(char)a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (char)isOpaque;
- (void)setArrowPosition:(unsigned long long)a0;
- (void)setBezeled:(char)a0;
- (void)setBordered:(char)a0;
- (void)setImagePosition:(unsigned long long)a0;
- (void)setImageScaling:(unsigned long long)a0;
- (void)setMenuItem:(id)a0;
- (void)setShowsFirstResponder:(char)a0;

@end
