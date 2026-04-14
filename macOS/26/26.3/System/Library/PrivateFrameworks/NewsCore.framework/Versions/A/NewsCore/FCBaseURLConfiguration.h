@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)liveActivityBaseURLForConfiguration:(id)a0;
+ (id)smarterFetchBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)puzzlesArchiveBaseURLForConfiguration:(id)a0;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;

- (id)fairPlayBaseURL;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)CAPIBaseURL;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)searchBaseURLForConfiguration;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)initWithCoreConfiguration:(id)a0;
- (id)ckRecordFetchBaseURLForConfiguration;
- (id)puzzlesArchiveBaseURLForConfiguration;
- (id)smarterFetchBaseURLForConfiguration;
- (void).cxx_destruct;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)notificationsBaseURL;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)newsletterBaseURL;
- (id)authTokenBaseURLForConfiguration;

@end
