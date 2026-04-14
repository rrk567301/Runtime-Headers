@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest

@property (retain, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithPeerPaymentPreferences:(id)a0;

@end
