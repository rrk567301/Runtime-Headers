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

+ (id)shortTitleForString:(id)a0;
+ (id)longTitleForString:(id)a0;

- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)fitsFullTitle;
- (BOOL)fitsShortTitle;
- (void)useFullTitle;
- (void)useShortTitle;
- (void)updateConstraintConstants;
- (double)_widthForTitle:(id)a0 compressedImage:(BOOL)a1;

@end
