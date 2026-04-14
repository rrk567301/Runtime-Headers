@class NSData, NSString;

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSData *rewrappedPaymentData;
@property (readonly, copy, nonatomic) NSString *primaryAccountNumberSuffix;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
