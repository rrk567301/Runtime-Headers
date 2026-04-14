@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)CAPIBaseURL;
- (id)fairPlayBaseURL;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)initWithCoreConfiguration:(id)a0;
- (id)newsletterBaseURL;
- (id)notificationsBaseURL;
- (id)searchBaseURLForConfiguration;
- (id)sportsDataVisualizationBaseURLForConfiguration;

@end
