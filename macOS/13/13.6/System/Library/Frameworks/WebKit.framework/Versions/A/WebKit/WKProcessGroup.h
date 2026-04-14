@protocol WKProcessGroupDelegate;

@interface WKProcessGroup : NSObject {
    struct RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>> { struct WebProcessPool *m_ptr; } _processPool;
    struct WeakObjCPtr<id<WKProcessGroupDelegate>> { id m_weakReference; } _delegate;
}

@property (readonly) struct OpaqueWKContext { } *_contextRef;
@property (weak, nonatomic) id<WKProcessGroupDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithInjectedBundleURL:(id)a0;
- (id)initWithInjectedBundleURL:(id)a0 andCustomClassesForParameterCoder:(id)a1;

@end
