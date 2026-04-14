@class NSString, WKContentWorld, WKWebView, WKFrameInfo;

@interface WKScriptMessage : NSObject <WKObject> {
    struct AlignedStorage<API::ScriptMessage, 8UL> { struct Storage { unsigned char data[72]; } m_storage; } _scriptMessage;
}

@property (readonly, copy, nonatomic) id body;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, copy, nonatomic) WKFrameInfo *frameInfo;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WKContentWorld *world;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
