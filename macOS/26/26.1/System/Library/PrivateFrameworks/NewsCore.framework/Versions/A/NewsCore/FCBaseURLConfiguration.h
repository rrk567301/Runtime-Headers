@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)liveActivityBaseURLForConfiguration:(id)a0;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)smarterFetchBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)puzzlesArchiveBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;

- (id)CAPIBaseURL;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)searchBaseURLForConfiguration;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)fairPlayBaseURL;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)ckRecordFetchBaseURLForConfiguration;
- (id)puzzlesArchiveBaseURLForConfiguration;
- (id)initWithCoreConfiguration:(id)a0;
- (id)notificationsBaseURL;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)newsletterBaseURL;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (void).cxx_destruct;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)smarterFetchBaseURLForConfiguration;

@end
