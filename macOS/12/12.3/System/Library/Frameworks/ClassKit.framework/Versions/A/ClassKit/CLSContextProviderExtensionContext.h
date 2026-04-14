@interface CLSContextProviderExtensionContext : NSExtensionContext <CLSContextProviderInternal, CLSContextProvider>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)updateDescendantsOfContext:(id)a0 completion:(id /* block */)a1;
- (void)getMainAppContextPathWithCompletion:(id /* block */)a0;
- (void)updateDescendantsOfContextPath:(id)a0 completion:(id /* block */)a1;

@end
