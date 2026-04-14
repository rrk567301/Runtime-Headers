@class NSString, AXVTextView, NSTimer, AXVBrailleWord, AXVBrailleTextView;

@interface AXVBrailleWordView : AXVView

@property (retain, nonatomic, setter=_setBrailleTextView:) AXVBrailleTextView *_brailleTextView;
@property (retain, nonatomic, setter=_setUnraisedBrailleTextView:) AXVBrailleTextView *_unraisedBrailleTextView;
@property (retain, nonatomic, setter=_setTransliterationTextView:) AXVTextView *_transliterationTextView;
@property (retain, nonatomic, setter=_setBrailleCursorBlinkTimer:) NSTimer *_brailleCursorBlinkTimer;
@property (nonatomic, setter=_setCurrentlyBlinking:) BOOL _currentlyBlinking;
@property (copy, nonatomic, setter=_setMaskedBrailleString:) NSString *_maskedBrailleString;
@property (copy, nonatomic) AXVBrailleWord *brailleWord;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateView;
- (id)_createUnraisedBrailleTextView;
- (id)_createBrailleTextView;
- (id)_createTransliterationTextView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 brailleWord:(id)a1;
- (id)_createUnraisedBrailleStringWithLength:(unsigned long long)a0;
- (void)_setFontSize:(double)a0;
- (void)_setHighlightCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_setBrailleCursorIndex:(unsigned long long)a0;
- (void)_updateLayoutOfViews;
- (void)_blinkBrailleCursor;
- (id)_maskedBrailleWordToBlinkBrailleCursor;
- (int)_brailleMaskFromCellBits:(int)a0 b:(int)a1 c:(int)a2 d:(int)a3 e:(int)a4 f:(int)a5 g:(int)a6 h:(int)a7;
- (int)_lowerLeftDotBrailleMask;
- (unsigned short)_maskBrailleUnicode:(unsigned short)a0 withMask:(int)a1;
- (int)_lowerRightDotBrailleMask;
- (struct CGSize { double x0; double x1; })_intrinsicContentSizeForTextView:(id)a0;
- (id)initWithBrailleWord:(id)a0;

@end
