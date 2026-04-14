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

+ (void)addStandardQueryParametersForURL:(id)a0 request:(id *)a1 serviceProxy:(id)a2;
+ (id)cacheBusterString;
+ (id)propertyListOperationWithURLBagKey:(id)a0 storeClient:(id)a1;
+ (id)acceptLanguageHeaderString;
+ (void)addITunesStoreHeadersToRequest:(id)a0 withStoreClient:(id)a1 storeAccount:(id)a2;
+ (id)pingOperationWithUrl:(id)a0 storeClient:(id)a1;

- (id)newRequestWithURL:(id)a0;
- (BOOL)shouldFollowRedirectWithRequest:(id)a0 returningError:(id *)a1;
- (BOOL)handleRedirectFromDataProvider:(id)a0;
- (BOOL)_canSendTokenToURL:(id)a0;
- (void)handleResponse:(id)a0;
- (BOOL)_dataProviderDidProcessDialog;
- (void)run;
- (id)init;
- (BOOL)_authenticateReturningError:(id *)a0;
- (id)description;
- (void)_runURLOperation;
- (void)_addStandardQueryParametersForURL:(id)a0;
- (id)authenticatedAccountDSID;
- (void).cxx_destruct;

@end
