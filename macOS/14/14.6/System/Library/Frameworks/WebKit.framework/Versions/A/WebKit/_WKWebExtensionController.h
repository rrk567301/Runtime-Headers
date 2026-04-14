@class NSSet, _WKWebExtensionControllerConfiguration, NSString;
@protocol _WKWebExtensionControllerDelegate;

@interface _WKWebExtensionController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionController> { struct type { unsigned char __lx[168]; } data; } _webExtensionController;
}

@property (readonly, nonatomic) void *_webExtensionController;
@property (weak, nonatomic) id<_WKWebExtensionControllerDelegate> delegate;
@property (readonly, copy, nonatomic) _WKWebExtensionControllerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSSet *extensions;
@property (readonly, copy, nonatomic) NSSet *extensionContexts;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)didFocusWindow:(id)a0;
- (void)didCloseWindow:(id)a0;
- (void)didActivateTab:(id)a0 previousActiveTab:(id)a1;
- (void)didChangeTabProperties:(unsigned long long)a0 forTab:(id)a1;
- (void)didCloseTab:(id)a0 windowIsClosing:(BOOL)a1;
- (void)didDeselectTabs:(id)a0;
- (void)didMoveTab:(id)a0 fromIndex:(unsigned long long)a1 inWindow:(id)a2;
- (void)didOpenTab:(id)a0;
- (void)didOpenWindow:(id)a0;
- (void)didReplaceTab:(id)a0 withTab:(id)a1;
- (void)didSelectTabs:(id)a0;
- (id)extensionContextForExtension:(id)a0;
- (id)extensionContextForURL:(id)a0;
- (BOOL)loadExtensionContext:(id)a0 error:(id *)a1;
- (BOOL)unloadExtensionContext:(id)a0 error:(id *)a1;

@end
