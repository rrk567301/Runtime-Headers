@class NSString;
@protocol LTUIViewServiceExtensionHostProtocol;

@interface LTUIExtensionHostContext : NSExtensionContext <LTUIViewServiceExtensionHostProtocol>

@property (weak) id<LTUIViewServiceExtensionHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)dismiss;
- (void).cxx_destruct;
- (void)confirmUserConsent;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)remoteIsReady;

@end
