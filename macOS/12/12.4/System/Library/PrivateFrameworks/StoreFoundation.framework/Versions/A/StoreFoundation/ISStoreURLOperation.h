@class NSString, NSNumber, ISAuthenticationContext;
@protocol ISURLOperationDelegate, ISStoreURLOperationDelegate, ISOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
    int _bagType;
    BOOL _adiActionInResponse;
    long long _adiSilentActionRetryCount;
}

@property (weak) id<ISStoreURLOperationDelegate, ISURLOperationDelegate, ISOperationDelegate> delegate;
@property (retain) NSString *urlBagKey;
@property (retain) NSNumber *authenticatedDSID;
@property BOOL urlKnownToBeTrusted;
@property (retain) ISAuthenticationContext *authenticationContext;
@property BOOL needsAuthentication;
@property BOOL sendToken;
@property BOOL useDSIDSpecificBag;
@property (copy) id /* block */ authenticationCompletedHandler;
@property (copy) id /* block */ requestMutationHandler;
@property BOOL shouldRetryOnSilentADIAction;
@property (copy, nonatomic) NSString *strongToken;

+ (id)acceptLanguageHeaderString;
+ (id)cacheBusterString;
+ (void)addITunesStoreHeadersToRequest:(id)a0 withStoreClient:(id)a1 storeAccount:(id)a2;
+ (void)addStandardQueryParametersForURL:(id)a0 request:(id *)a1 serviceProxy:(id)a2;
+ (id)pingOperationWithUrl:(id)a0 storeClient:(id)a1;
+ (id)propertyListOperationWithURLBagKey:(id)a0 storeClient:(id)a1;

- (void)run;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)authenticatedAccountDSID;
- (BOOL)handleRedirectFromDataProvider:(id)a0;
- (void)handleResponse:(id)a0;
- (id)newRequestWithURL:(id)a0;
- (BOOL)_authenticateReturningError:(id *)a0;
- (void)_runURLOperation;
- (BOOL)_dataProviderDidProcessDialog;
- (BOOL)_canSendTokenToURL:(id)a0;
- (void)_addStandardQueryParametersForURL:(id)a0;
- (BOOL)shouldFollowRedirectWithRequest:(id)a0 returningError:(id *)a1;

@end
