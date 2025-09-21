@class NSString, NSArray;

@interface PKPaymentCreateVehicleShareRequest : PKPaymentWebServiceRequest {
    NSString *_subcredentialIdentifier;
    unsigned long long _shareValidationType;
    NSArray *_remoteShareValidationContainers;
}

- (id)requestBody;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithSubcredentialIdentifier:(id)a0 shareValidationType:(unsigned long long)a1 shareValidationContainers:(id)a2;

@end
