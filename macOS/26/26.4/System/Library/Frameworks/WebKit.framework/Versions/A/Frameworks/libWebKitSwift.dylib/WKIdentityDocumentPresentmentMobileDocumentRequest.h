@class NSArray;

@interface WKIdentityDocumentPresentmentMobileDocumentRequest : NSObject {
    void /* function */ presentmentRequests;
    void /* function */ authenticationCertificates;
}

@property (nonatomic, copy) NSArray *presentmentRequests;
@property (nonatomic, copy) NSArray *authenticationCertificates;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPresentmentRequests:(id)a0 authenticationCertificates:(id)a1;

@end
