@protocol SiriUITalkGestureTargetDelegate;

@interface SiriUITalkGestureTarget : NSView {
    id<SiriUITalkGestureTargetDelegate> _delegate;
}

- (id)initWithDelegate:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)accessibilityPerformPress;

@end
