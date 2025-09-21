@protocol SiriUITalkGestureTargetDelegate;

@interface SiriUITalkGestureTarget : NSView {
    id<SiriUITalkGestureTargetDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (id)accessibilityRole;
- (char)isAccessibilityElement;

@end
