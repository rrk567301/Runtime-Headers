@class NSArray, PKContactInformation, NSString;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *downloadablePasses;
@property (readonly, copy, nonatomic) NSArray *moreInfoURLs;
@property (readonly, nonatomic) PKContactInformation *idmsContactInformation;
@property (readonly, nonatomic) NSString *nonce;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
