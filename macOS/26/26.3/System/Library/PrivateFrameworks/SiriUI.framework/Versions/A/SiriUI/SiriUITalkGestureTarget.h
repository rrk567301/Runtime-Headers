@protocol SiriUITalkGestureTargetDelegate;

@interface SiriUITalkGestureTarget : NSView {
    id<SiriUITalkGestureTargetDelegate> _delegate;
}

- (id)accessibilityLabel;
- (id)initWithDelegate:(id)a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)accessibilityPerformPress;

@end
