@interface SFEntitlements : NSObject

@property (nonatomic) char symptomAnalyticsTrain;
@property (nonatomic) char symptomAnalyticsSweep;
@property (nonatomic) char symptomAnalyticsRefresh;
@property (nonatomic) char symptomAnalyticsSetWatchpoint;
@property (nonatomic) char symptomAnalyticsNetworkBitmap;
@property (nonatomic) char symptomAnalyticsQuery;
@property (nonatomic) char symptomAnalyticsReset;
@property (nonatomic) char symptomAnalyticsConfigure;
@property (nonatomic) char symptomAnalyticsSetSnapshot;
@property (nonatomic) char symptomAnalyticsHealthCheck;
@property (nonatomic) char symptomsLinkAdvisory;
@property (nonatomic) char symptomsNetworkOfInterest;
@property (nonatomic) char symptomsNetDomainsAdmin;
@property (nonatomic) char symptomsRNFTest;
@property (nonatomic) char symptomsSymptomsToolTest;
@property (nonatomic) char symptomsNDF;
@property (nonatomic) char symptomsCOSMAdmin;
@property (nonatomic) char symptomsNWActivityDatabase;

+ (id)stringForEntitlement:(unsigned long long)a0;
+ (unsigned long long)entitlementForString:(id)a0;

- (char)boolForEntitlement:(unsigned long long)a0;
- (char)boolForEntitlementString:(id)a0;

@end
