@class NSView;
@protocol SiriUITextInputCommonDelegate, SiriUINCBreakOutDelegate, SiriUITextInputViewDelegate, NSSearchFieldDelegate;

@interface SiriUITextInputField : NSSearchField

@property BOOL dragging;
@property struct CGPoint { double x; double y; } dragOffset;
@property BOOL windowWasMoved;
@property (retain) NSView *backgroundView;
@property (weak) id<SiriUITextInputCommonDelegate, NSSearchFieldDelegate> delegate;
@property (weak, nonatomic) id<SiriUITextInputViewDelegate> inputDelegate;
@property (weak, nonatomic) id<SiriUINCBreakOutDelegate> ncBreakOutDelegate;

+ (Class)cellClass;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (void)mouseDown:(id)a0;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (BOOL)allowsVibrancy;
- (id)init;
- (void)mouseDragged:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchTextBounds;
- (void)selectText:(id)a0;
- (BOOL)textShouldEndEditing:(id)a0;
- (BOOL)shouldBreakOut:(id)a0;
- (void)loadTextCheckingPreferences:(id)a0;
- (void)mouseDownFixedPosition:(id)a0;
- (void)mouseDownWindowedLaunch:(id)a0;
- (void)mouseDraggedFixedPosition:(id)a0;
- (void)mouseDraggedWindowedLaunch:(id)a0;
- (void)mouseUpWindowedLaunch:(id)a0;
- (void)moveToWindowedModeFromLatencyPill;
- (void)saveTextCheckingPreferences:(id)a0;
- (void)updateCompositingFilter;

@end
