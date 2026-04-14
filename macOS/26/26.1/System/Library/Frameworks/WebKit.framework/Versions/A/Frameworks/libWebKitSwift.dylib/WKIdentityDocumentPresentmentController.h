@class NSError, WKIdentityDocumentPresentmentRequest, WKIdentityDocumentPresentmentResponse;
@protocol WKIdentityDocumentPresentmentDelegate;

@interface WKIdentityDocumentPresentmentController : NSObject {
    void /* unknown type, empty encoding */ base;
}

@property (nonatomic, weak) id<WKIdentityDocumentPresentmentDelegate> delegate;

- (void).cxx_destruct;
- (void)cancelRequest;
- (id)init;
- (void)performRequest:(WKIdentityDocumentPresentmentRequest *)a0 completionHandler:(void (^)(WKIdentityDocumentPresentmentResponse *, NSError *))a1;

@end
