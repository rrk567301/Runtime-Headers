@class NSString, NSUUID, NSError, NSRemoteViewController;

@interface NSRemoteViewControllerAuxiliary : NSObject <NSRemoteViewDelegate> {
    unsigned char _inhibitFirstResponder : 1;
    NSRemoteViewController *_remoteViewController;
    NSString *_serviceBundleIdentifier;
    NSUUID *_serviceInstanceIdentifier;
    NSString *_serviceViewControllerClassName;
    NSError *_terminationError;
}

@property (copy) id /* block */ connectionHandler;
@property (readonly) char shouldRetainExportedObject;

- (void)dealloc;
- (id)exportedInterface;
- (id)exportedObject;
- (void)_invalidate;
- (id)serviceViewControllerInterface;
- (void)view:(id)a0 encounteredError:(id)a1;
- (char)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidAdvanceToRunPhase:(id)a0;
- (void)viewDidInvalidate:(id)a0;
- (char)viewShouldDragOldestAncestorWindow:(id)a0;
- (char)_invalid;
- (id)_viewWithoutLoad;

@end
