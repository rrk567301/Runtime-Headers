@class NSArray, NSError, AIDAAccountManager, AKAppleIDAuthenticationController;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject {
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSError *loadError;
@property (weak, nonatomic) id<AADeviceListDelegate> delegate;

- (id)_accountStore;
- (void)_loadDeviceList;
- (void)_renewCredentials;
- (void)_createRequestForAccount:(id)a0 requestHandler:(id /* block */)a1;
- (void)refreshDeviceList;
- (void).cxx_destruct;
- (void)_loadRequest:(id)a0 responseHandler:(id /* block */)a1;
- (id)_appleAccount;
- (id)initWithAccountManager:(id)a0;
- (id)_authController;
- (id)_aidaAccount;
- (void)_setDeviceList:(id)a0 loadError:(id)a1;

@end
