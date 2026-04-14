@class PXGadgetNavigationItem, NSTimer;
@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject

@property (retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem;
@property (weak, nonatomic) NSTimer *navigationInvalidationTimer;
@property (weak, nonatomic) id<PXGadgetNavigationHelperDelegate> delegate;
@property (readonly, nonatomic) BOOL hasPendingNavigation;

- (void).cxx_destruct;
- (BOOL)_navigateToGadget:(id)a0 animated:(BOOL)a1 navigationBlock:(id /* block */)a2;
- (void)_pendingNavigationInvalidationTimerFired:(id)a0;
- (void)_stopPendingNavigationTimer;
- (void)invalidateAnyPendingNavigation;
- (void)navigateIfNeeded;
- (BOOL)navigateToFirstGadgetMatchingCriteria:(id /* block */)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)navigateToGadgetDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void)startPendingNavigationTimer;

@end
