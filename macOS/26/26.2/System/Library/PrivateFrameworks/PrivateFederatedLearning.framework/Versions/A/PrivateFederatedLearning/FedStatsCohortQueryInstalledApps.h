@class NSDictionary;

@interface FedStatsCohortQueryInstalledApps : NSObject <FedStatsCohortQueryProtocol>

@property (readonly, nonatomic) unsigned long long numOfMediaApps;
@property (readonly, nonatomic) unsigned long long numOfPhoneApps;
@property (retain, nonatomic) NSDictionary *domainToInstalledApps;

+ (void)initialize;
+ (id)cohortInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_isSupportedIntentMediaApp:(id)a0 :(id)a1 :(id)a2;
- (void)applyFilteringForMediaDomain;
- (id)cohortKeyForParameters:(id)a0 possibleError:(id *)a1;
- (void)lsAppRecords;
- (void)lsPluginKitExtensions;
- (void)resolveDomainToBundleIds;

@end
