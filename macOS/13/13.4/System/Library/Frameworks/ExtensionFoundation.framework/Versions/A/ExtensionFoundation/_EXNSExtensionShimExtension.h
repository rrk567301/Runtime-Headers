@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (void).cxx_destruct;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)didFinishLaunching;
- (BOOL)loadDelegateWithClass:(Class)a0;
- (void)willFinishLaunching;

@end
