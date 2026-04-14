@class NSError, WKIdentityDocumentPresentmentRequest, WKIdentityDocumentPresentmentResponse;
@protocol WKIdentityDocumentPresentmentDelegate;

@interface WKIdentityDocumentPresentmentController : NSObject {
    void /* unknown type, empty encoding */ base;
}

@property (nonatomic, weak) id<WKIdentityDocumentPresentmentDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)performRequest:(WKIdentityDocumentPresentmentRequest *)a0 completionHandler:(void (^)(WKIdentityDocumentPresentmentResponse *, NSError *))a1;

@end
