@class NSString;

@interface WKWebProcessPlugInCSSStyleDeclarationHandle : NSObject <WKObject> {
    struct AlignedStorage<WebKit::InjectedBundleCSSStyleDeclarationHandle, 8UL> { struct Storage { unsigned char data[32]; } m_storage; } _cssStyleDeclarationHandle;
}

@property (readonly) void *_cssStyleDeclarationHandle;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cssStyleDeclarationHandleWithJSValue:(id)a0 inContext:(id)a1;

- (void)dealloc;

@end
