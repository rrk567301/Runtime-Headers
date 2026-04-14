@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)configurationWithContext:(id)a0;
+ (id)_configurationRequestWithURLString:(id)a0;
+ (id)configurationWithContext:(id)a0 andSession:(id)a1;

- (id)_escrowProxyConfigurationURL;
- (id)_fetchEscrowConfigurationBag;
- (id)_escrowProxyConfigurationURLRequest;
- (id)escrowAuthInfoForCreateEscrowRecordFlow:(BOOL)a0;
- (id)_escrowProxyURL;
- (id)_escrowConfigurationBag;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)_fetchConfigurationDictionary;
- (id)_configurationInfoURLRequest;
- (id)accountInfoFetchSetupDictionary;
- (id)_iCloudEnvironment;
- (id)_setupConfigurationURLs;
- (id)_escrowConfigurationBagFull;

@end
