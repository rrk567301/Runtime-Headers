@class NSView;

@interface FI_TMouseOverButton : FI_TButton {
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct { struct TNotificationCenterObserver *__cap_; } ; } _observers;
    struct vector<std::pair<MouseState, TMouseOverButtonTransition>, std::allocator<std::pair<MouseState, TMouseOverButtonTransition>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } fMouseOverTransitions;
}

@property (nonatomic) int mouseState;
@property (nonatomic) struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } anchorPointUpdater;
@property (retain, nonatomic) NSView *axProxy;

- (void)mouseEntered:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)updateState;
- (void)mouseDown:(id)a0;
- (void)updateLayer;
- (void)mouseExited:(id)a0;
- (void)layout;
- (void)initCommon;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)mouseUp:(id)a0;
- (BOOL)allowsVibrancy;
- (void)setHidden:(BOOL)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)aboutToTearDown;
- (void)initTracking;
- (void)setStateUpdaterForID:(int)a0 buttonStateTransitions:(const void *)a1;
- (void)updateAnchorPoint;
- (void)updateForKeyWindowMouseOver;
- (void)updateForMouseOut;
- (void)updateForMouseOver;
- (void)windowDidBecomeKey;
- (void)windowDidResignKey;

@end
