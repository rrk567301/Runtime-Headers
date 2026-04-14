@class NSString, PKUserLegalAgreementConsent;

@interface PKPaymentFetchPassLegalAgreementRequest : PKPaymentWebServiceRequest {
    NSString *_passTypeIdentifier;
    NSString *_passSerialNumber;
    PKUserLegalAgreementConsent *_agreement;
}

- (void).cxx_destruct;
- (void)_urlRequestWithBuilder:(id)a0 completion:(id /* block */)a1;
- (id)initPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 agreement:(id)a2;

@end
