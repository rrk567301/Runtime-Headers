@class NSUUID, NSArray, NSMutableDictionary;

@interface MTRMetrics : NSObject {
    NSMutableDictionary *_metricsData;
}

@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *allKeys;

- (id)initWithCapacity:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)metricDataForKey:(id)a0;
- (void)removeMetricDataForKey:(id)a0;
- (void)setMetricData:(id)a0 forKey:(id)a1;

@end
