@class ICPressableAttachmentAccessibilityElement, NSAttributedString;
@protocol ICMClickableTextViewDelegate;

@interface ICMClickableTextView : NSTextView

@property (weak, nonatomic) id<ICMClickableTextViewDelegate> clickDelegate;
@property (retain, nonatomic) NSAttributedString *nonHighlightedClickableAttributedString;
@property (retain, nonatomic) NSAttributedString *highlightedClickableAttributedString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } clickableRange;
@property (nonatomic) BOOL isHighlighted;
@property (retain, nonatomic) ICPressableAttachmentAccessibilityElement *accessibilityLearnMoreProxyElement;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityHelp;
- (BOOL)accessibilityPerformPress;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isInsideClickableRangeForEvent:(id)a0;
- (void)adjustHeightConstraintToFitCurrentText:(id)a0;
- (void)resetHighlightedState;

@end
