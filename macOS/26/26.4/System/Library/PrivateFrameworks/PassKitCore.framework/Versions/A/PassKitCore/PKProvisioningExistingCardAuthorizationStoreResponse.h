@class NSArray;

@interface PKProvisioningExistingCardAuthorizationStoreResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *existingCardAuthorizations;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizations:(id)a0;

@end
