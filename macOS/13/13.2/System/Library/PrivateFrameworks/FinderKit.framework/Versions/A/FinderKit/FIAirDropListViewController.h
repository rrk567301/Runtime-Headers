@class NSString, NSImage, NSTrackingArea, NSValue, FI_TTouchBarScrollingStackViewController, CNAvatarCache;

@interface FIAirDropListViewController : FI_TTableViewController <TMarkTornDown> {
    struct function<void (const TFENode &)> { struct __value_func<void (const TFENode &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _clickHandler;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _notificationObservers;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hoverOverCellRect;
    double _establishedHoverOverCellAt;
    double _lastUpdatedDataSourceAt;
    CNAvatarCache *_avatarCache;
    NSTrackingArea *_trackingArea;
    BOOL _repopulating;
    struct TNSWeakPtr<FI_TTouchBarScrollingStackViewController> { NSValue *fWeakObject; } _touchBarAirDropParticipantsViewController;
    NSImage *_closeImage;
    NSImage *_blankImage;
}

@property (readonly, weak, nonatomic) FI_TTouchBarScrollingStackViewController *airDropParticipantsViewController;
@property (nonatomic) BOOL handlingResetContentInsets;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (void)tableView:(id)a0 didRemoveRowView:(id)a1 forRow:(long long)a2;
- (BOOL)selectionShouldChangeInTableView:(id)a0;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)configureView;
- (Class)dataSourceClass;
- (void)setClickHandler:(const void *)a0;
- (long long)rowForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct function<void (const TFENode &)> { struct __value_func<void (const TFENode &)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })clickHandler;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForRow:(long long)a0;
- (void)tableViewDidMoveToWindow;
- (long long)hoveringOverRow;
- (void)reestablishHoverOverRow;
- (struct CGSize { double x0; double x1; })rowBoundingRectSize:(id)a0;
- (void)flashOverlayScroller;
- (void)scrollRowForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 squeezeOutContentInsetsOnly:(BOOL)a2;
- (void)resetContentInsets;
- (void)resetContentInsetsIfNeeded;
- (void)scrollHoverOverRowToCorrectOffset;
- (void)clipViewBoundsDidChange;
- (id)_airDropParticipantsViewControllerNoLoad;
- (void)updateTouchBarAirDropParticipantsStackView;

@end
