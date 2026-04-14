@class NSDictionary;

@interface _ANEAnalyticsTask : NSObject

@property (readonly, nonatomic) NSDictionary *metrics;

+ (id)objectWithMetrics:(id)a0;

- (id)serialize;
- (id)initWithMetrics:(id)a0;
- (void).cxx_destruct;

@end
