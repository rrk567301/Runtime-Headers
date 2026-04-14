@class _EXViewControllerSceneConfiguration, NSViewController;

@interface _EXExtensionViewController : NSViewController <_EXConnectionHandler>

@property (readonly) NSViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (void)loadView;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (id)makeContentViewController;

@end
