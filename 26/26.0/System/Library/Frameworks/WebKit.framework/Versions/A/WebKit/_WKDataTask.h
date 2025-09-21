@class NSString, WKWebView;
@protocol _WKDataTaskDelegate;

@interface _WKDataTask : NSObject <WKObject> {
    struct AlignedStorage<API::DataTask, 8UL> { struct Storage { unsigned char data[112]; } m_storage; } _dataTask;
    struct RetainPtr<id<_WKDataTaskDelegate>> { id<_WKDataTaskDelegate> m_ptr; } _delegate;
}

@property (retain, nonatomic) id<_WKDataTaskDelegate> delegate;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
