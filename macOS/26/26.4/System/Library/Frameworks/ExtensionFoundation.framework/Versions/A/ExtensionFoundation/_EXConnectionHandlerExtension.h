@protocol _EXConnectionHandler;

@interface _EXConnectionHandlerExtension : _EXExtension

@property (retain) id principalObject;
@property (retain) id<_EXConnectionHandler> connectionHandler;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (Class)delegateClass;
- (void).cxx_destruct;
- (void)didFinishLaunching;

@end
