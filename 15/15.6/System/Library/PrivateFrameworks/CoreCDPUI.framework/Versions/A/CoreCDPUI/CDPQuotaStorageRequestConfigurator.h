@class ACAccount;

@interface CDPQuotaStorageRequestConfigurator : NSObject {
    ACAccount *_account;
    unsigned long long _appList;
    char _specifyE2EE;
}

- (void).cxx_destruct;
- (char)_isConfigurationValid;
- (id)initWithAccount:(id)a0 appList:(unsigned long long)a1 contentSpecifiesE2EE:(char)a2;
- (id)quotaRequest:(id *)a0;

@end
