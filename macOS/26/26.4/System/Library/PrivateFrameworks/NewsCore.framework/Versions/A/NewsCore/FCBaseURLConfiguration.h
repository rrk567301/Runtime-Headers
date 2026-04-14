@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)ckMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)liveActivityBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)smarterFetchBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)puzzlesArchiveBaseURLForConfiguration:(id)a0;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)a0;

- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)smarterFetchBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)CAPIBaseURL;
- (id)ckMultiFetchBaseURLForConfiguration;
- (void).cxx_destruct;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)fairPlayBaseURL;
- (id)puzzlesArchiveBaseURLForConfiguration;
- (id)searchBaseURLForConfiguration;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)initWithCoreConfiguration:(id)a0;
- (id)notificationsBaseURL;
- (id)newsletterBaseURL;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)ckRecordFetchBaseURLForConfiguration;

@end
