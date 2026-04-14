@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)liveActivityBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)puzzlesArchiveBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)a0;
+ (id)smarterFetchBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;

- (id)ckRecordFetchBaseURLForConfiguration;
- (id)searchBaseURLForConfiguration;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)initWithCoreConfiguration:(id)a0;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)newsletterBaseURL;
- (void).cxx_destruct;
- (id)CAPIBaseURL;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)smarterFetchBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)fairPlayBaseURL;
- (id)notificationsBaseURL;
- (id)puzzlesArchiveBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;

@end
