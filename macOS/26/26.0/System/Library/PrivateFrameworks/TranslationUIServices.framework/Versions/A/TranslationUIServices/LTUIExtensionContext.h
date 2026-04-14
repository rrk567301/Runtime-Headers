@class NSString;

@interface LTUIExtensionContext : NSExtensionContext <LTUIViewServiceExtensionHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)initialize;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)dismiss;
- (void)confirmUserConsent;
- (void)expandSheet;
- (void)finishWithTranslation:(id)a0;
- (void)remoteIsReady;

@end
