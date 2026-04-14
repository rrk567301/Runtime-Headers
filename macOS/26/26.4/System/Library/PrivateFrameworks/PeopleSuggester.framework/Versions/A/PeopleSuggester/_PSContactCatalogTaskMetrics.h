@interface _PSContactCatalogTaskMetrics : NSObject

@property (nonatomic) double processingTime;
@property (nonatomic) double timeSinceLastRun;
@property (nonatomic) long long status;

+ (void)sendAnalyticsEvent:(id)a0;

- (id)analyticsPayload;
- (id)init;

@end
