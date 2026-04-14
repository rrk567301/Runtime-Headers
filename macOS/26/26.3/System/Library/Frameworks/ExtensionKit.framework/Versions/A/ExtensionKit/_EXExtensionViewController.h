@class _EXViewControllerSceneConfiguration, NSViewController;

@interface _EXExtensionViewController : NSViewController <_EXConnectionHandler>

@property (readonly) NSViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)makeContentViewController;

@end
