@protocol NSExtensionRequestHandling;

@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (Class)delegateClass;
- (void).cxx_destruct;
- (void)didFinishLaunching;

@end
