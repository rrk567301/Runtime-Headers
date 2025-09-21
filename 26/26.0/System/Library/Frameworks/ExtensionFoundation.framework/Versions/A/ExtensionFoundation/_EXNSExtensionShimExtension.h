@protocol NSExtensionRequestHandling;

@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (void)didFinishLaunching;
- (Class)delegateClass;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void).cxx_destruct;

@end
