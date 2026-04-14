@class NSURL, NSArray;

@interface WKIdentityDocumentPresentmentRequest : NSObject {
    void /* unknown type, empty encoding */ _unsafeOrigin;
    void /* function */ mobileDocumentRequests;
}

@property (nonatomic, readonly) NSURL *origin;
@property (nonatomic, readonly) NSArray *mobileDocumentRequests;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOrigin:(id)a0 mobileDocumentRequests:(id)a1;

@end
