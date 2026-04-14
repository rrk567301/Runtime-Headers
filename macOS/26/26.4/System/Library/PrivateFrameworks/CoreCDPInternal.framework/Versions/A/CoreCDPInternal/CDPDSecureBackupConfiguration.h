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

- (id)_fetchConfigurationDictionary;
- (id)_setupConfigurationURLs;
- (id)_escrowConfigurationBagFull;
- (id)accountInfoFetchSetupDictionary;
- (id)escrowAuthInfoForCreateEscrowRecordFlow:(BOOL)a0;
- (id)_fetchEscrowConfigurationBag;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)_escrowConfigurationBag;
- (id)_escrowProxyURL;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_configurationInfoURLRequest;
- (id)_iCloudEnvironment;
- (id)_escrowProxyConfigurationURL;

@end
