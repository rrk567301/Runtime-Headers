@interface SSFileProviderUtilities : NSObject

+ (void)initialize;
+ (id)domainsSupportingSearchOnServer;
+ (id)domainWithIds:(id)a0;
+ (id)domainsForProviderWithTopLevelBundleId:(id)a0;
+ (void)fetchDomainsSupportingSearchOnServerWithCompletionBlock:(id /* block */)a0;
+ (id)allFileProviderDomains;

@end
