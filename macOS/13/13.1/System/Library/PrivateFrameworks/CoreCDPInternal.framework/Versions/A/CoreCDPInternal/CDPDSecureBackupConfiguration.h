@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)configurationWithContext:(id)a0;
+ (id)configurationWithContext:(id)a0 andSession:(id)a1;
+ (id)_configurationRequestWithURLString:(id)a0;

- (void).cxx_destruct;
- (id)_escrowProxyURL;
- (id)_iCloudEnvironment;
- (id)escrowAuthInfo;
- (id)accountInfoFetchSetupDictionary;
- (id)_escrowProxyConfigurationURL;
- (id)_escrowConfigurationBag;
- (id)_setupConfigurationURLs;
- (id)_escrowConfigurationBagFull;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_configurationInfoURLRequest;
- (id)_fetchEscrowConfigurationBag;
- (id)_fetchConfigurationDictionary;
- (id)_fetchConfigurationWithRequest:(id)a0;

@end
