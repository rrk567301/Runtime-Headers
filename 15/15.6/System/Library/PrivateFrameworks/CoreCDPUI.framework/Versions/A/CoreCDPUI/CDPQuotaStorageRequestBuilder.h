@interface CDPQuotaStorageRequestBuilder : NSObject

- (id)_buildQuotaStorageRequestConfiguratorWithAppList:(unsigned long long)a0 quotaContentSpecifiesE2EE:(char)a1;
- (id)buildQuotaRequestWithExtraChecks:(char)a0 andContext:(id)a1;

@end
