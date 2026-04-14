@class NSString;

@interface _WKWebExtensionMessagePort : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionMessagePort> { struct type { unsigned char __lx[40]; } data; } _webExtensionMessagePort;
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

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)disconnectWithError:(id)a0;

@end
