@class NSArray, NSString, PKProvisioningExistingCardAuthorizationDestinationDeviceSignature;

@interface PKProvisioningExistingCardAuthorizationStoreRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSArray *existingCardAuthorizations;
@property (retain, nonatomic) PKProvisioningExistingCardAuthorizationDestinationDeviceSignature *destinationDeviceSignature;
@property (copy, nonatomic) NSString *migrationToken;

- (void).cxx_destruct;
- (id)_bodyDictionary;
- (void)_urlRequestWithBuilder:(id)a0 completion:(id /* block */)a1;
- (id)initWithExistingCardAuthorizations:(id)a0 destinationDeviceSignature:(id)a1 migrationToken:(id)a2;

@end
