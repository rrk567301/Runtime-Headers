@class NSString;
@protocol _WKInspectorExtensionDelegate;

@interface _WKInspectorExtension : NSObject <WKObject> {
    struct AlignedStorage<API::InspectorExtension, 8UL> { struct Storage { unsigned char data[40]; } m_storage; } _extension;
    struct unique_ptr<WebKit::InspectorExtensionDelegate, std::default_delete<WebKit::InspectorExtensionDelegate>> { struct InspectorExtensionDelegate *__ptr_; } _delegate;
}

@property (readonly, nonatomic) NSString *extensionID;
@property (weak, nonatomic) id<_WKInspectorExtensionDelegate> delegate;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reloadIgnoringCache:(BOOL)a0 userAgent:(id)a1 injectedScript:(id)a2 completionHandler:(id /* block */)a3;
- (void)createTabWithName:(id)a0 tabIconURL:(id)a1 sourceURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)evaluateScript:(id)a0 frameURL:(id)a1 contextSecurityOrigin:(id)a2 useContentScriptContext:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)evaluateScript:(id)a0 inTabWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)navigateToURL:(id)a0 inTabWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
