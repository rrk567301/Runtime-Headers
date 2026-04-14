@class NSArray, NSString, NSURL, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {
    struct AlignedStorage<WebKit::WebFrame, 8UL> { struct Storage { unsigned char data[120]; } m_storage; } _frame;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly, nonatomic) BOOL containsAnyFormElements;
@property (readonly, nonatomic) BOOL isMainFrame;
@property (readonly, nonatomic) _WKFrameHandle *handle;
@property (readonly, nonatomic) NSArray *appleTouchIconURLs;
@property (readonly, nonatomic) NSArray *faviconURLs;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lookUpContentFrameFromWindowOrFrameElement:(id)a0;
+ (id)lookUpFrameFromHandle:(id)a0;
+ (id)lookUpFrameFromJSContext:(id)a0;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)_provisionalURL;
- (id)_securityOrigin;
- (id)jsContextForServiceWorkerWorld:(id)a0;
- (id)_browserContextController;
- (id)_certificateChain;
- (BOOL)_hasCustomContentProvider;
- (id)_parentFrame;
- (struct __SecTrust { } *)_serverTrust;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(unsigned long long)a1;
- (id)jsCSSStyleDeclarationForCSSStyleDeclarationHandle:(id)a0 inWorld:(id)a1;
- (id)jsContextForWorld:(id)a0;
- (id)jsNodeForNodeHandle:(id)a0 inWorld:(id)a1;
- (id)jsRangeForRangeHandle:(id)a0 inWorld:(id)a1;

@end
