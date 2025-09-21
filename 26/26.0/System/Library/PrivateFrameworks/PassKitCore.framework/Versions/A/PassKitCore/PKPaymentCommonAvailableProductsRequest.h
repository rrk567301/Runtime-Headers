@class NSString, NSURL;

@interface PKPaymentCommonAvailableProductsRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSString *preferredLanguage;
@property (readonly, nonatomic) NSURL *contentURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isStatic;
- (id)_urlRequest;
- (id)initWithContentURL:(id)a0;
- (id)initWithContentURL:(id)a0 preferredLanguage:(id)a1;

@end
