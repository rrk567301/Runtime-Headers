@class NSString, NSView, CALayer;
@protocol VisualTabPickerRootViewTransitionCoordinatorDataSource;

@interface VisualTabPickerRootViewTransitionCoordinator : NSObject <VisualTabPickerTransitioning> {
    NSView *_topBarView;
    CALayer *_tileContainerLayer;
}

@property (readonly, weak, nonatomic) id<VisualTabPickerRootViewTransitionCoordinatorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setTransitionProgress:(float)a0;
- (void)transitionDidEnd;
- (void)transitionWillBegin;

@end
