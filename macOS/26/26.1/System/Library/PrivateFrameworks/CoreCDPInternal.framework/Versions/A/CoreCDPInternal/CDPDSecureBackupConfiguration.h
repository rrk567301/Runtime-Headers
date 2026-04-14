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

- (id)_escrowProxyConfigurationURL;
- (id)escrowAuthInfoForCreateEscrowRecordFlow:(BOOL)a0;
- (id)_escrowConfigurationBag;
- (id)_escrowProxyURL;
- (id)_fetchEscrowConfigurationBag;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)_setupConfigurationURLs;
- (id)_fetchConfigurationDictionary;
- (id)_escrowConfigurationBagFull;
- (id)_configurationInfoURLRequest;
- (void).cxx_destruct;
- (id)accountInfoFetchSetupDictionary;
- (id)_iCloudEnvironment;
- (id)_escrowProxyConfigurationURLRequest;

@end
