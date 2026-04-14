@class FPXExtensionContext;

@interface FPXPlugInKitExtensionContext : NSExtensionContext {
    FPXExtensionContext *_context;
}

@property (class, retain, nonatomic) Class principalClass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;

@end
