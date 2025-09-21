@class NSSet, PKPaymentOffersSessionDetails, NSURL, NSArray, NSData;

@interface PKPaymentOfferWebServiceMerchandisingRequest : PKPaymentOfferWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSSet *merchandisingIdentifiers;
@property (copy, nonatomic) NSSet *needsProvisioningMerchandisingIdentifiers;
@property (retain, nonatomic) PKPaymentOffersSessionDetails *sessionDetails;
@property (copy, nonatomic) NSArray *certificates;
@property (copy, nonatomic) NSData *signature;

+ (BOOL)includeSEIDHeader;
+ (id)merchandisingEphemeralDeviceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequest;
- (id)merchandisingBodyDictionary;
- (id)merchandisingBodyString;

@end
