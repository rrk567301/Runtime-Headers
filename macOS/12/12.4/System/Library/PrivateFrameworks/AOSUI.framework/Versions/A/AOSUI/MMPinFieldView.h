@class NSArray, NSImage, NSString, NSButton;
@protocol MMPinFieldViewDelegate;

@interface MMPinFieldView : NSView {
    NSImage *_digitField;
    NSImage *_digitFieldHightlight;
    NSArray *_pinFieldBoxArray;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_digitRects;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _progressRect;
    NSString *_localizedString;
    NSString *_pinString;
    int _position;
    double _maxFontHeight;
    BOOL _enabled;
    long long _pinLength;
    struct { unsigned char pinFieldViewTextDidChange : 1; unsigned char pinFieldViewTextDidComplete : 1; unsigned char padding : 6; } _delegateFlags;
}

@property BOOL supportsRTL;
@property (weak, nonatomic) id<MMPinFieldViewDelegate> delegate;
@property (nonatomic) BOOL echosBullets;
@property (retain) NSButton *nextButtonResponder;

+ (struct CGSize { double x0; double x1; })digitViewSizeWithLength:(long long)a0;
+ (struct CGSize { double x0; double x1; })viewSizeWithLength:(long long)a0;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinLength:(long long)a1;
- (id)PINString;
- (void)clearPIN;
- (BOOL)PINCompleted;
- (long long)PINLength;
- (void)_setupDigitMaxHeight;
- (struct CGSize { double x0; double x1; })digitViewSize;
- (void)_setupDigitRectsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_digitFontAttributes;
- (void)drawFocusRingOnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleBackspaceEvent;
- (void)_appendNewCharacterWithEvent:(id)a0;
- (id)_axBoxChildren;
- (void)_delayedPostAccessibilityFocusChange;
- (void)handleTextChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIndex:(int)a0;
- (int)activeInputIndex;
- (id)_axChildren;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinLength:(long long)a1 supportsRTL:(BOOL)a2;

@end
