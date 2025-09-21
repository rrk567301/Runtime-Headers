@protocol _EXConnectionHandler;

@interface _EXConnectionHandlerExtension : _EXExtension

@property (retain) id principalObject;
@property (retain) id<_EXConnectionHandler> connectionHandler;

- (void)didFinishLaunching;
- (Class)delegateClass;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void).cxx_destruct;

@end
