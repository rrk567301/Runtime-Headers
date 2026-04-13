@class NSString;

@interface LTUIExtensionContext : NSExtensionContext <LTUIViewServiceExtensionHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)finishWithTranslation:(id)a0;

@end
