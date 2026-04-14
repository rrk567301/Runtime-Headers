@protocol LTUIViewServiceExtensionHostProtocol;

@interface LTUIExtensionHostContext : NSExtensionContext

@property (weak) id<LTUIViewServiceExtensionHostProtocol> delegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)dismiss;
- (void)confirmUserConsent;
- (void)finishWithTranslation:(id)a0;

@end
