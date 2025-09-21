@class NSString, NSView, _ASCABLEQRCodeImageView, _ASCABLEQRCodeBadgeView;

@interface _ASCABLEQRCodeView : NSView {
    NSString *_message;
    _ASCABLEQRCodeImageView *_imageView;
    NSView *_platterView;
    _ASCABLEQRCodeBadgeView *_badgeView;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithMessage:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (double)_edgeLength;
- (id)_qrCodeASImage;
- (id)_qrCodeCIImage;
- (id)_qrCodeColor;
- (void)_updatePlatterBorderStyle;
- (void)_updateQRCodeImage;

@end
