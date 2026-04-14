@protocol _EXConnectionHandler;

@interface _EXConnectionHandlerExtension : _EXExtension

@property (retain) id principalObject;
@property (retain) id<_EXConnectionHandler> connectionHandler;

- (void).cxx_destruct;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)didFinishLaunching;
- (void)willFinishLaunching;
- (BOOL)loadDelegateWithClass:(Class)a0;

@end
