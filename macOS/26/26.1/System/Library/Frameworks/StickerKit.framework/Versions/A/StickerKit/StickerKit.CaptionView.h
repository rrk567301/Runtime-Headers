@interface StickerKit.CaptionView : NSStackView {
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ captionViewDelegate;
}

@property (nonatomic) BOOL hidden;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;

- (BOOL)isHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)xButtonClickedWithSender:(id)a0;

@end
