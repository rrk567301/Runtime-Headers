@class NSString, NSNumber, ISAuthenticationContext;
@protocol ISURLOperationDelegate, ISStoreURLOperationDelegate, ISOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
    int _bagType;
    char _adiActionInResponse;
    long long _adiSilentActionRetryCount;
}

@property (weak) id<ISStoreURLOperationDelegate, ISURLOperationDelegate, ISOperationDelegate> delegate;
@property (retain) NSString *urlBagKey;
@property (retain) NSNumber *authenticatedDSID;
@property char urlKnownToBeTrusted;
@property (retain) ISAuthenticationContext *authenticationContext;
@property char needsAuthentication;
@property char sendToken;
@property char useDSIDSpecificBag;
@property (copy) id /* block */ authenticationCompletedHandler;
@property (copy) id /* block */ requestMutationHandler;
@property char shouldRetryOnSilentADIAction;
@property (copy, nonatomic) NSString *strongToken;

+ (id)acceptLanguageHeaderString;
+ (void)addITunesStoreHeadersToRequest:(id)a0 withStoreClient:(id)a1 storeAccount:(id)a2;
+ (void)addStandardQueryParametersForURL:(id)a0 request:(id *)a1 serviceProxy:(id)a2;
+ (id)cacheBusterString;
+ (id)pingOperationWithUrl:(id)a0 storeClient:(id)a1;
+ (id)propertyListOperationWithURLBagKey:(id)a0 storeClient:(id)a1;

- (id)description;
- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0;
- (char)handleRedirectFromDataProvider:(id)a0;
- (void)_addStandardQueryParametersForURL:(id)a0;
- (char)_authenticateReturningError:(id *)a0;
- (char)_canSendTokenToURL:(id)a0;
- (char)_dataProviderDidProcessDialog;
- (void)_runURLOperation;
- (id)authenticatedAccountDSID;
- (id)newRequestWithURL:(id)a0;
- (char)shouldFollowRedirectWithRequest:(id)a0 returningError:(id *)a1;

@end
