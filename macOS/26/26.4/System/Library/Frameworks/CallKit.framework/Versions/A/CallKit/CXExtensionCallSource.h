@class NSExtension, CXProviderExtensionHostContext;
@protocol NSCopying;

@interface CXExtensionCallSource : CXCallSource

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> requestIdentifier;
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext;

- (id)vendorProtocolDelegate;
- (id)bundle;
- (id)initWithExtension:(id)a0;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (id)initWithExtensionIdentifier:(id)a0;

@end
