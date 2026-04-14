@class NSMutableArray, AXVBrailleScrollView, AXVFlippedContentView, NSTextView, NSAttributedString, NSWindow;

@interface AXVBrailleWindow : AXVVoiceOverStyleWindow

@property (retain, nonatomic, setter=_setBrailleWithTransliteration:) NSAttributedString *_brailleWithTransliteration;
@property (nonatomic, setter=_setBrailleCellRange:) struct _NSRange { unsigned long long location; unsigned long long length; } _brailleCellRange;
@property (nonatomic, setter=_setBrailleCursorIndex:) long long _brailleCursorIndex;
@property (nonatomic, setter=_setBrailleCellWindowOffset:) long long _brailleCellWindowOffset;
@property (retain, nonatomic, setter=_setBrailleHistoryStrings:) NSMutableArray *_brailleHistoryStrings;
@property (retain, nonatomic, setter=_setBrailleHistoryWindow:) NSWindow *_brailleHistoryWindow;
@property (retain, nonatomic, setter=_setBrailleHistoryTextView:) NSTextView *_brailleHistoryTextView;
@property (retain, nonatomic, setter=_setBrailleContentView:) AXVFlippedContentView *_brailleContentView;
@property (retain, nonatomic, setter=_setBrailleWords:) NSMutableArray *_brailleWords;
@property (retain, nonatomic, setter=_setBrailleScrollView:) AXVBrailleScrollView *_brailleScrollView;
@property (retain, nonatomic, setter=_setBrailleWordViews:) NSMutableArray *_brailleWordViews;
@property (nonatomic, setter=_setVisibleBrailleWordViewCount:) long long _visibleBrailleWordViewCount;
@property (nonatomic, setter=_setWidthOfWindowStackViewLeadingButton:) double _widthOfWindowStackViewLeadingButton;
@property (nonatomic) double fontSize;

- (id)init;
- (void).cxx_destruct;
- (void)_getResizeEdgeAndCornerThicknesses:(double[8])a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (struct CGSize { double x0; double x1; })windowWillResize:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (id)_createBrailleScrollViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_heightOfBrailleAndTransliteration;
- (void)_pressCloseCaptionTextHistoryWindow;
- (void)_pressedHistoryButton;
- (void)_printAverageTimeToUpdateBrailleInfoWithStartTime:(double)a0;
- (double)_recalculateWindowHeight;
- (void)_scrollContentViewToBeginning;
- (void)_setupBrailleHistoryTextViewForWindow:(id)a0;
- (void)_setupBrailleHistoryWindow;
- (id)_setupButtonStackView;
- (id)_setupHistoryButton;
- (void)_setupWindowStackView;
- (void)_updateBrailleContentViewFrame;
- (void)_updateBraillePropertiesWithInfo:(id)a0;
- (void)_updateBrailleWindowHistoryStrings;
- (void)_updateBrailleWordViews;
- (void)_updateBrailleWords;
- (void)_updateWindowFrame;
- (double)_widthOfBrailleAndTransliteration;
- (void)updateWithBrailleInfo:(id)a0;

@end
