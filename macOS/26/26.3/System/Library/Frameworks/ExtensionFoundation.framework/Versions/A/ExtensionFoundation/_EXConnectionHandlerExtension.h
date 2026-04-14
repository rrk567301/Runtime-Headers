@protocol _EXConnectionHandler;

@interface _EXConnectionHandlerExtension : _EXExtension

@property (retain) id principalObject;
@property (retain) id<_EXConnectionHandler> connectionHandler;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void).cxx_destruct;
- (void)didFinishLaunching;
- (Class)delegateClass;
- (void)willFinishLaunching;

@end
