@protocol _EXConnectionHandler;

@interface _EXConnectionHandlerExtension : _EXExtension

@property (retain) id principalObject;
@property (retain) id<_EXConnectionHandler> connectionHandler;

- (Class)delegateClass;
- (void)didFinishLaunching;
- (void).cxx_destruct;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;

@end
