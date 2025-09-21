@class NSView;
@protocol SiriUITextInputCommonDelegate, SiriUINCBreakOutDelegate, SiriUITextInputViewDelegate, NSSearchFieldDelegate;

@interface SiriUITextInputField : NSSearchField

@property char dragging;
@property struct CGPoint { double x; double y; } dragOffset;
@property char windowWasMoved;
@property (retain) NSView *backgroundView;
@property (weak) id<SiriUITextInputCommonDelegate, NSSearchFieldDelegate> delegate;
@property (weak, nonatomic) id<SiriUITextInputViewDelegate> inputDelegate;
@property (weak, nonatomic) id<SiriUINCBreakOutDelegate> ncBreakOutDelegate;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (char)allowsVibrancy;
- (char)becomeFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (char)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchTextBounds;
- (void)selectText:(id)a0;
- (char)textShouldEndEditing:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (char)shouldBreakOut:(id)a0;
- (void)loadTextCheckingPreferences:(id)a0;
- (void)mouseDownFixedPosition:(id)a0;
- (void)mouseDownWindowedLaunch:(id)a0;
- (void)mouseDraggedFixedPosition:(id)a0;
- (void)mouseDraggedWindowedLaunch:(id)a0;
- (void)mouseUpWindowedLaunch:(id)a0;
- (void)saveTextCheckingPreferences:(id)a0;
- (void)updateCompositingFilter;

@end
