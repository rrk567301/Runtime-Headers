@class NSView, NSTrackingArea;

@interface FI_TMouseOverButton : FI_TButton {
    NSTrackingArea *_trackingArea;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _observers;
    struct TMouseOverButtonState { FI_TMouseOverButton *fTarget; struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fStart; struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fStop; } fMouseNormal;
    struct TMouseOverButtonState { FI_TMouseOverButton *fTarget; struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fStart; struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fStop; } fMouseOver;
    struct TMouseOverButtonState { FI_TMouseOverButton *fTarget; struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fStart; struct function<void (FI_TMouseOverButton *)> { struct __value_func<void (FI_TMouseOverButton *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fStop; } fMouseDown;
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
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)a0;
- (void)updateState;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)initTracking;
- (void)updateAnchorPoint;
- (void)updateForMouseOver;
- (void)updateForMouseOut;
- (void)updateForKeyWindowMouseOver;
- (void)setStateUpdaterForID:(int)a0 normal:(const void *)a1 mouseOver:(const void *)a2 mouseDown:(const void *)a3;
- (void)windowDidBecomeKey;
- (void)windowDidResignKey;
- (void)updateToMatchMouseOverState;

@end
