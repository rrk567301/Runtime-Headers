@class NSString;
@protocol WKWebProcessPlugIn;

@interface WKWebProcessPlugInController : NSObject <WKObject> {
    struct AlignedStorage<WebKit::InjectedBundle, 8UL> { struct Storage { unsigned char data[64]; } m_storage; } _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn>> { id<WKWebProcessPlugIn> m_ptr; } _principalClassInstance;
}

@property (readonly) struct OpaqueWKBundle { } *_bundleRef;
@property (readonly) id parameters;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)extendClassesForParameterCoder:(id)a0;
- (void)_setPrincipalClassInstance:(id)a0;

@end
