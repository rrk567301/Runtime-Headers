@class NSString;

@interface FCEndpointConfiguration : NSObject

@property (readonly, nonatomic) NSString *clientAPIBaseURLString;
@property (readonly, nonatomic) NSString *notificationsBaseURLString;
@property (readonly, nonatomic) NSString *staticAssetBaseURLString;
@property (readonly, nonatomic) NSString *remoteDataSourceBaseURLString;
@property (readonly, nonatomic) NSString *newsletterAPIBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsBaseURLString;
@property (readonly, nonatomic) NSString *fairPlayBaseURLString;
@property (readonly, nonatomic) NSString *searchAPIBaseURLString;
@property (readonly, nonatomic) NSString *authTokenAPIBaseURLString;
@property (readonly, nonatomic) NSString *sportsDataVisualizationAPIBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsNotificationReceiptBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsSportsEventsBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsAppHealthBaseURLString;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7 appAnalyticsNotificationReceiptBaseURLString:(id)a8;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7 appAnalyticsNotificationReceiptBaseURLString:(id)a8 authTokenAPIBaseURLString:(id)a9;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7 appAnalyticsNotificationReceiptBaseURLString:(id)a8 authTokenAPIBaseURLString:(id)a9 sportsDataVisualizationAPIBaseURLString:(id)a10;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7 appAnalyticsNotificationReceiptBaseURLString:(id)a8 authTokenAPIBaseURLString:(id)a9 sportsDataVisualizationAPIBaseURLString:(id)a10 appAnalyticsSportsEventsBaseURLString:(id)a11 appAnalyticsAppHealthBaseURLString:(id)a12;

@end
