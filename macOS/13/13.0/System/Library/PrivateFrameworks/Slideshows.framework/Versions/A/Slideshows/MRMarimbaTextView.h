@class NSObject, MPText;
@protocol MRMarimbaBasicPlayback;

@interface MRMarimbaTextView : NSTextView {
    MPText *_editedText;
    NSObject<MRMarimbaBasicPlayback> *_marimbaPlayer;
    BOOL _disableUpdate;
    BOOL _useRichText;
}

- (void)dealloc;
- (BOOL)shouldChangeTextInRanges:(id)a0 replacementStrings:(id)a1;
- (void)didChangeText;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (void)setTypingAttributes:(id)a0;
- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inMarimbaPlayer:(id)a1 forText:(id)a2;
- (void)resizeString:(id)a0 withFactor:(double)a1 toView:(BOOL)a2;
- (void)_updateLineHeight:(id)a0;
- (void)_setPlaceholder;
- (id)editedString:(id)a0;
- (void)textBoundsNeedsUpdate;

@end
