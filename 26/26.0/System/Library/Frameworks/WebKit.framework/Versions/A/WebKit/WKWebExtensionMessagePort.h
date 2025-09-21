@class NSString;

@interface WKWebExtensionMessagePort : NSObject <WKObject> {
    struct AlignedStorage<WebKit::WebExtensionMessagePort, 8UL> { struct Storage { unsigned char data[48]; } m_storage; } _webExtensionMessagePort;
}

@property (readonly, nonatomic) void *_webExtensionMessagePort;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) id /* block */ messageHandler;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (readonly, nonatomic, getter=isDisconnected) BOOL disconnected;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)disconnect;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)disconnectWithError:(id)a0;
- (void)_objc_initiateDealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct Ref<WebKit::WebExtensionMessagePort, WTF::RawPtrTraits<WebKit::WebExtensionMessagePort>, WTF::DefaultRefDerefTraits<WebKit::WebExtensionMessagePort>> { struct WebExtensionMessagePort *x0; })_protectedWebExtensionMessagePort;

@end
