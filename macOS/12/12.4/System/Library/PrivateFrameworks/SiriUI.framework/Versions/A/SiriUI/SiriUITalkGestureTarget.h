@protocol SiriUITalkGestureTargetDelegate;

@interface SiriUITalkGestureTarget : NSView {
    id<SiriUITalkGestureTargetDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)initWithDelegate:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;
- (BOOL)acceptsFirstMouse:(id)a0;

@end
