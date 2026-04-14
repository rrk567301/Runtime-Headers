@class SOElementProxyWindow, NSString, SOActionsListViewController, NSPopover;
@protocol NSObject;

@interface SOActionsPopoverManager : NSObject <NSPopoverDelegate>

@property (retain) SOActionsListViewController *actionsListViewController;
@property SOElementProxyWindow *elementProxyWindow;
@property NSPopover *actionsPopover;
@property double startAnimatingPopoverCloseTimestamp;
@property (retain) id<NSObject> observerPopoverWillShow;
@property (retain) id<NSObject> observerPopoverDidShow;
@property (retain) id<NSObject> observerPopoverWillClose;
@property (retain) id<NSObject> observerPopoverDidClose;
@property BOOL isAnimatingShow;
@property BOOL isAnimatingClose;
@property (copy) id /* block */ didShowBlock;
@property (copy) id /* block */ completionBlock;
@property (readonly) BOOL isVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (BOOL)isMouseInWindow;
- (void)hideActionsPopover;
- (void)showActionsPopoverWithDisambiguationItems:(id)a0 title:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completionBlock:(id /* block */)a3 didShowBlock:(id /* block */)a4;

@end
