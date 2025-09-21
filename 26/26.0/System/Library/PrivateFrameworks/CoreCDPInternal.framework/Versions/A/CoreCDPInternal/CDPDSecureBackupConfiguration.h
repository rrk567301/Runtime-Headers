@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)configurationWithContext:(id)a0 andSession:(id)a1;
+ (id)configurationWithContext:(id)a0;
+ (id)_configurationRequestWithURLString:(id)a0;

- (id)_escrowConfigurationBag;
- (id)_configurationInfoURLRequest;
- (id)escrowAuthInfoForCreateEscrowRecordFlow:(BOOL)a0;
- (id)_escrowProxyConfigurationURLRequest;
- (id)accountInfoFetchSetupDictionary;
- (id)_iCloudEnvironment;
- (id)_fetchEscrowConfigurationBag;
- (id)_fetchConfigurationDictionary;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)_escrowProxyConfigurationURL;
- (id)_escrowConfigurationBagFull;
- (id)_escrowProxyURL;
- (id)_setupConfigurationURLs;
- (void).cxx_destruct;

@end
