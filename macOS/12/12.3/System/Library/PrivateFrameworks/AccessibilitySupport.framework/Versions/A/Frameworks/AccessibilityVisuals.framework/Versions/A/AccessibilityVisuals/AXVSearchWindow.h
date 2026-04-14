@class NSString, AXVTextField;

@interface AXVSearchWindow : AXVVoiceOverStyleWindow

@property (retain, nonatomic, setter=_setSearchTextField:) AXVTextField *_searchTextField;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) double baseFontSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionRange;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_localizedPlaceholder;
- (void)_setupStackView;
- (void)_adjustWindowFrameToFitContent:(double)a0;
- (struct CGSize { double x0; double x1; })_windowSizeToFitContent:(double)a0;
- (struct CGSize { double x0; double x1; })_sizeOfString:(id)a0 withFont:(id)a1;
- (void)_updateTextSelection;
- (id)_setupSearchTextField;

@end
