@class NSURLRequest;

@interface AATermsReportUserActionRequest : AARequest {
    NSURLRequest *_urlRequest;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLRequest:(id)a0 parameters:(id)a1;

@end
