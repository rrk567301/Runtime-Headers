@class NSLayoutConstraint;

@interface _NSTouchBarGroupButton : NSButton {
    double _preferredWidth;
    BOOL _isAlertButton;
    unsigned long long _compressedImagePosition;
    unsigned long long _defaultImagePosition;
    NSLayoutConstraint *_fullTitleWidthConstraint;
    NSLayoutConstraint *_shortTitleWidthConstraint;
    NSLayoutConstraint *_shortTitleCompressedWidthConstraint;
}

@property double preferredWidth;
@property BOOL isAlertButton;
@property unsigned long long defaultImagePosition;
@property unsigned long long compressedImagePosition;

+ (id)longTitleForString:(id)a0;
+ (id)shortTitleForString:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (double)_widthForTitle:(id)a0 compressedImage:(BOOL)a1;
- (BOOL)fitsFullTitle;
- (BOOL)fitsShortTitle;
- (void)updateConstraintConstants;
- (void)useFullTitle;
- (void)useShortTitle;

@end
