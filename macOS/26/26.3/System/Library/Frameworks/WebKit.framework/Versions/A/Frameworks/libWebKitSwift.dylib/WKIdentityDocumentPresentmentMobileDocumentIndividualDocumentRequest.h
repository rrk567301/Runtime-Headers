@class NSString, NSDictionary;

@interface WKIdentityDocumentPresentmentMobileDocumentIndividualDocumentRequest : NSObject {
    void /* function */ documentType;
    void /* function */ namespaces;
}

@property (nonatomic, copy) NSString *documentType;
@property (nonatomic, copy) NSDictionary *namespaces;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDocumentType:(id)a0 namespaces:(id)a1;

@end
