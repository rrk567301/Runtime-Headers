@class ICPressableAttachmentAccessibilityElement, NSAttributedString;
@protocol ICMClickableTextViewDelegate;

@interface ICMClickableTextView : NSTextView

@property (weak, nonatomic) id<ICMClickableTextViewDelegate> clickDelegate;
@property (retain, nonatomic) NSAttributedString *nonHighlightedClickableAttributedString;
@property (retain, nonatomic) NSAttributedString *highlightedClickableAttributedString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } clickableRange;
@property (nonatomic) BOOL isHighlighted;
@property (retain, nonatomic) ICPressableAttachmentAccessibilityElement *accessibilityLearnMoreProxyElement;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)isAccessibilityElement;
- (BOOL)mouseDownCanMoveWindow;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHelp;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)isInsideClickableRangeForEvent:(id)a0;
- (void)resetHighlightedState;
- (void)adjustHeightConstraintToFitCurrentText:(id)a0;

@end
