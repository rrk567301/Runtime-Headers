@class NSExtension, CXProviderExtensionHostContext;
@protocol NSCopying;

@interface CXExtensionCallSource : CXCallSource

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> requestIdentifier;
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext;

- (id)bundle;
- (id)initWithExtension:(id)a0;
- (int)processIdentifier;
- (id)vendorProtocolDelegate;
- (id)init;
- (void).cxx_destruct;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (id)initWithExtensionIdentifier:(id)a0;

@end
