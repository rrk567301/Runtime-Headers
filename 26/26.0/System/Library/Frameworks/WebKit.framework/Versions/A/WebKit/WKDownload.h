@class NSString, NSProgress, WKWebView, NSURLRequest, WKFrameInfo;
@protocol WKDownloadDelegate;

@interface WKDownload : NSObject <WKObject, NSProgressReporting> {
    struct AlignedStorage<WebKit::DownloadProxy, 8UL> { struct Storage { unsigned char data[344]; } m_storage; } _download;
    struct WeakObjCPtr<id<WKDownloadDelegate>> { id m_weakReference; } _delegate;
}

@property (readonly, nonatomic) NSURLRequest *originalRequest;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WKDownloadDelegate> delegate;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, nonatomic) WKFrameInfo *originatingFrame;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

+ (BOOL)accessInstanceVariablesDirectly;

@end
