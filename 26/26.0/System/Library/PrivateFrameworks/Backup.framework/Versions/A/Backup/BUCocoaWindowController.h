@interface BUCocoaWindowController : NSObject {
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct TNotificationCenterObserver *__cap_; } _notificationCenterObservers;
}

@property (retain, nonatomic) BUCocoaWindowController *selfReference;
@property (nonatomic) double maxX;
@property (nonatomic) double minY;

- (id)initWithWindow:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)interceptsWindowClose:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowWillChangeFrame:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
