@class _EXViewControllerSceneConfiguration, NSViewController;

@interface _EXExtensionViewController : NSViewController <_EXConnectionHandler>

@property (readonly) NSViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)makeContentViewController;

@end
