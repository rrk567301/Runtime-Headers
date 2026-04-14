@class NSArray, NSError, AIDAAccountManager, AKAppleIDAuthenticationController;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject {
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSError *loadError;
@property (weak, nonatomic) id<AADeviceListDelegate> delegate;

- (void).cxx_destruct;
- (id)_accountStore;
- (id)_authController;
- (id)_appleAccount;
- (id)initWithAccountManager:(id)a0;
- (void)refreshDeviceList;
- (id)_aidaAccount;
- (void)_loadDeviceList;
- (void)_setDeviceList:(id)a0 loadError:(id)a1;
- (void)_createRequestForAccount:(id)a0 requestHandler:(id /* block */)a1;
- (void)_loadRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_renewCredentials;

@end
