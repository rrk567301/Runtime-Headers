@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)smarterFetchBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)puzzlesArchiveBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)liveActivityBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;

- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)fairPlayBaseURL;
- (id)initWithCoreConfiguration:(id)a0;
- (id)puzzlesArchiveBaseURLForConfiguration;
- (id)newsletterBaseURL;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)notificationsBaseURL;
- (id)searchBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)CAPIBaseURL;
- (id)ckRecordFetchBaseURLForConfiguration;
- (id)smarterFetchBaseURLForConfiguration;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (void).cxx_destruct;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;

@end
