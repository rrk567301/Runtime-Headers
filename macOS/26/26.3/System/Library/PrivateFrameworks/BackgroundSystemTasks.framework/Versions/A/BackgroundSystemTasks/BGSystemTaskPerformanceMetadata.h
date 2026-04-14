@class NSString, NSArray, NSNumber;

@interface BGSystemTaskPerformanceMetadata : NSObject

@property (readonly, nonatomic) NSString *performanceMetricIdentifier;
@property (readonly, nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSArray *featureCodes;
@property (retain, nonatomic) NSNumber *qos;
@property (retain, nonatomic) NSNumber *expectedMetricValue;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 qos:(id)a1 workloadCategory:(unsigned long long)a2 expectedMetricValue:(id)a3;
- (id)initWithIdentifier:(id)a0 taskName:(id)a1 qos:(id)a2 workloadCategory:(unsigned long long)a3 expectedMetricValue:(id)a4;

@end
