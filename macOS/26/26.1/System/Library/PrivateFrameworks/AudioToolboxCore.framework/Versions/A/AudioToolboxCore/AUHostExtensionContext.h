@class NSXPCConnection, NSExtension, AUHostDelegate;

@interface AUHostExtensionContext : NSExtensionContext

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) AUHostDelegate *delegate;
@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_allowedItemPayloadClasses;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_derivedExtensionAuxiliaryHostProtocol;

@end
