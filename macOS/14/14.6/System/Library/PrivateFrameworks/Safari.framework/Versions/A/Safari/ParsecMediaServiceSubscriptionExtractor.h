@class NSString;

@interface ParsecMediaServiceSubscriptionExtractor : NSObject {
    struct BundleFrame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _bundleFrame;
    struct BundleScriptWorld { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _isolatedWorld;
}

@property (readonly, copy, nonatomic) NSString *subscriptionInformation;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithBundleFrame:(const void *)a0;

@end
