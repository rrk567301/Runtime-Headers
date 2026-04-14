@class WKWebProcessPlugInNodeHandle, NSString;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject> {
    struct AlignedStorage<WebKit::InjectedBundleHitTestResult, 8UL> { struct Storage { unsigned char data[152]; } m_storage; } _hitTestResult;
}

@property (readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
