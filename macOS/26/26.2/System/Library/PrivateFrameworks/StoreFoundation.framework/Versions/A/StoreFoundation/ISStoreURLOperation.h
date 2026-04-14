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
+ (id)pingOperationWithUrl:(id)a0 storeClient:(id)a1;
+ (void)addITunesStoreHeadersToRequest:(id)a0 withStoreClient:(id)a1 storeAccount:(id)a2;
+ (void)addStandardQueryParametersForURL:(id)a0 request:(id *)a1 serviceProxy:(id)a2;
+ (id)propertyListOperationWithURLBagKey:(id)a0 storeClient:(id)a1;

- (BOOL)shouldFollowRedirectWithRequest:(id)a0 returningError:(id *)a1;
- (BOOL)handleRedirectFromDataProvider:(id)a0;
- (void)run;
- (void)handleResponse:(id)a0;
- (id)newRequestWithURL:(id)a0;
- (BOOL)_canSendTokenToURL:(id)a0;
- (void)_addStandardQueryParametersForURL:(id)a0;
- (id)authenticatedAccountDSID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_authenticateReturningError:(id *)a0;
- (BOOL)_dataProviderDidProcessDialog;
- (void)_runURLOperation;
- (id)init;

@end
