@interface ICMSidebarController : NSObject {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ contentViewFrameObservation;
    void /* unknown type, empty encoding */ containerViewFrameObservation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentClickGestureRecognizer;
    void /* function */ didClickContent;
}

@property (nonatomic) BOOL isSwipeGestureEnabled;
@property (nonatomic) BOOL isSidebarHidden;
@property (nonatomic) BOOL isSidebarExpanded;
@property (nonatomic, weak) void /* function */ containerView;
@property (nonatomic, weak) void /* function */ sidebarView;
@property (nonatomic) double expandedSidebarWidth;
@property (nonatomic) double previewSidebarWidth;
@property (nonatomic) BOOL isTrackingSwipeGesture;
@property (nonatomic) double currentSwipeGestureAmount;
@property (nonatomic, copy) id /* block */ didClickContent;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleScrollWheelEvent:(id)a0;
- (void)didClickContentWithSender:(id)a0;
- (void)setSidebarHidden:(BOOL)a0 animated:(BOOL)a1;

@end
