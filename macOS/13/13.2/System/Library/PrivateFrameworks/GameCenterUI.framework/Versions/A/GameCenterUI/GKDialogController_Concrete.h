@class GKPanel, NSViewController, NSString, NSMutableArray, NSWindow;
@protocol GKViewController;

@interface GKDialogController_Concrete : GKDialogController <NSWindowDelegate>

@property (weak) NSWindow *parentWindow;
@property (retain, nonatomic) NSViewController<GKViewController> *viewController;
@property (retain, nonatomic) GKPanel *window;
@property (nonatomic) struct _NSModalSession { } *modalSession;
@property (retain) NSMutableArray *dimmingViews;
@property (copy) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dismiss:(id)a0;
- (void)_dismissViewController;
- (BOOL)presentViewController:(id)a0;
- (void)checkAuthentication;
- (BOOL)presentViewController:(id)a0 withDismiss:(id /* block */)a1;
- (BOOL)presentViewController:(id)a0 withTitle:(BOOL)a1;
- (void)_presentViewController:(id)a0 withTitle:(BOOL)a1;
- (void)addDimmingViews;
- (void)removeDimmingViews;

@end
