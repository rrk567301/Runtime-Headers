@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)overrideCAPIURLString;

- (void).cxx_destruct;
- (id)initWithCoreConfiguration:(id)a0;
- (id)fairPlayBaseURL;
- (id)notificationsBaseURL;
- (id)newsletterBaseURL;
- (id)CAPIBaseURL;
- (id)searchBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;

@end
