@interface _PSBackgroundProcessingMetrics : NSObject

@property (nonatomic) double processingTime;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long fetchedInteractionCount;
@property (nonatomic) unsigned long long processedInteractionCount;
@property (nonatomic) unsigned long long updatedInteractionCount;

+ (void)sendAnalyticsEvent:(id)a0;

- (id)analyticsPayload;
- (id)init;

@end
