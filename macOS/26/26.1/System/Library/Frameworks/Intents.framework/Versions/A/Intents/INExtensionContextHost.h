@class NSString, NSBundle;

@interface INExtensionContextHost : NSExtensionContext <INExtensionContextHosting>

@property (retain, nonatomic) NSBundle *extensionBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;

@end
