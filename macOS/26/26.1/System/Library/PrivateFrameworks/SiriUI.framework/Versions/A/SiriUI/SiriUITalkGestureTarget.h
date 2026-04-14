@protocol SiriUITalkGestureTargetDelegate;

@interface SiriUITalkGestureTarget : NSView {
    id<SiriUITalkGestureTargetDelegate> _delegate;
}

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (id)initWithDelegate:(id)a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)accessibilityPerformPress;

@end
