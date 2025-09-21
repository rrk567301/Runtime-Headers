@class AXVSearchTextField, NSImageView, NSString, NSColor;
@protocol AXVSearchTextFieldUpdateListener;

@interface AXVSearchWindow : AXVVoiceOverStyleWindow

@property (retain, nonatomic, setter=_setSearchTextField:) AXVSearchTextField *_searchTextField;
@property (retain, nonatomic, setter=_setSearchIconImageView:) NSImageView *_searchIconImageView;
@property (nonatomic) char _isTransparent;
@property (nonatomic) char _defaultOpaque;
@property (nonatomic) char _defaultHasShadow;
@property (retain, nonatomic) NSColor *_defaultBackgroundColor;
@property (nonatomic) double _defaultSearchIconImageViewAlpha;
@property (nonatomic) double _defaultSearchTextFieldAlpha;
@property (nonatomic) double _defaultVisualeffectViewAlpha;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) double baseFontSize;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectionRange;
@property (weak, nonatomic) id<AXVSearchTextFieldUpdateListener> searchTextUpdateListener;

- (id)init;
- (void).cxx_destruct;
- (char)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (void)show;
- (void)_adjustWindowFrameToFitContent:(double)a0;
- (void)_setupStackView;
- (struct CGSize { double x0; double x1; })_sizeOfString:(id)a0 withFont:(id)a1;
- (void)_updateSearchIcon;
- (struct CGSize { double x0; double x1; })_windowSizeToFitContent:(double)a0;
- (void)setIsHighContrast:(char)a0;
- (void)setSearchWindowTransparent:(char)a0;

@end
