@protocol NSExtensionRequestHandling;

@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (Class)delegateClass;
- (void)didFinishLaunching;
- (void).cxx_destruct;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;

@end
