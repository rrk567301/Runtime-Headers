@class NSString;

@interface _VUITVAppNavigationController : VUINSNavigationController <VUINSNavigationControllerDelegate>

@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (void)vui_pushViewController:(id)a0 animated:(BOOL)a1;
- (id)vui_popViewControllerAnimated:(BOOL)a0;
- (id)vui_popToRootViewControllerAnimated:(BOOL)a0;
- (id)vui_viewControllers;
- (void)vui_setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)vui_visibleViewController;
- (id)vui_rootViewController;
- (id)vui_topViewController;

@end
