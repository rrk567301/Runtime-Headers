@class NSString, NSArray;

@interface PKPeerPaymentRecipientsRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (nonatomic) unsigned long long recipientAddressSource;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2;

@end
