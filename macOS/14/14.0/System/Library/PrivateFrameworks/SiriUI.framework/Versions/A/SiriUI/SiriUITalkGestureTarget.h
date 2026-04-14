@protocol SiriUITalkGestureTargetDelegate;

@interface SiriUITalkGestureTarget : NSView {
    id<SiriUITalkGestureTargetDelegate> _delegate;
}

- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)initWithDelegate:(id)a0;
- (BOOL)isAccessibilityElement;

@end
