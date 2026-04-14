@class NSView;

@interface FI_TMouseOverButton : FI_TButton {
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _observers;
    struct vector<std::pair<MouseState, TMouseOverButtonTransition>, std::allocator<std::pair<MouseState, TMouseOverButtonTransition>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<MouseState, TMouseOverButtonTransition> *, std::allocator<std::pair<MouseState, TMouseOverButtonTransition>>> { void *__value_; } __end_cap_; } fMouseOverTransitions;
}

@property (nonatomic) int mouseState;
@property (nonatomic) struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } anchorPointUpdater;
@property (retain, nonatomic) NSView *axProxy;

- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (void)mouseDown:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)updateState;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)setStateUpdaterForID:(int)a0 buttonStateTransitions:(const void *)a1;
- (void)initTracking;
- (void)updateAnchorPoint;
- (void)updateForMouseOver;
- (void)updateForMouseOut;
- (void)updateForKeyWindowMouseOver;
- (void)windowDidBecomeKey;
- (void)windowDidResignKey;

@end
