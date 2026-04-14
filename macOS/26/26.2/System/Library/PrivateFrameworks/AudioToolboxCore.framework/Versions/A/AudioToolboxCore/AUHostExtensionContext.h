@class NSXPCConnection, NSExtension, AUHostDelegate;

@interface AUHostExtensionContext : NSExtensionContext

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) AUHostDelegate *delegate;
@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;

+ (BOOL)conformsToProtocol:(id)a0;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (BOOL)conformsToProtocol:(id)a0;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
