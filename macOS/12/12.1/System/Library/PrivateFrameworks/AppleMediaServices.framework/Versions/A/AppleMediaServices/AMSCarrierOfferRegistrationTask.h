@class AMSURLRequestEncoder, NSString, NSArray, AMSBagKeySet, ACAccount, AMSPromise, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSCarrierOfferRegistrationTask : AMSTask <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) NSArray *carriers;
@property (readonly) AMSURLRequestEncoder *checkOfferRequestEncoder;
@property (readonly) NSString *deviceGUID;
@property (readonly) NSString *msisdn;
@property (readonly) AMSURLRequestEncoder *registrationRequestEncoder;
@property (readonly) AMSURLSession *urlSession;
@property (readonly) AMSPromise *pacTokenPromise;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)invalidParameterError:(id)a0;
+ (id)pollingIntervalFromBag:(id)a0;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)_pacToken;
- (id)initWithAccount:(id)a0 bag:(id)a1 carriers:(id)a2 checkOfferRequestEncoder:(id)a3 deviceGUID:(id)a4 msisdn:(id)a5 pacTokenPromise:(id)a6 registrationRequestEncoder:(id)a7 urlSession:(id)a8;
- (id)_performRegistrationFlow;
- (id)_includesAllowedCarrier;
- (id)_hasOffers;
- (id)_registerCarrierOffersToAccount;
- (id)_checkOffersBody;
- (id)_checkOffersRequest;
- (id)_parseCheckOffersResult:(id)a0;
- (id)_registrationRequest;
- (id)_registrationBody;
- (id)initWithAccount:(id)a0 bag:(id)a1 carriers:(id)a2 deviceGUID:(id)a3 msisdn:(id)a4;

@end
