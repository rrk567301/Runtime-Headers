@class NSArray, NSDictionary, AMSMetricsFigaroEventModifier, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMetricsFigaroBagConfguration : NSObject

@property (readonly, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, nonatomic) NSArray *overrides;
@property (readonly, nonatomic) AMSMetricsFigaroEventModifier *defaultModifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long maxBatchSize;

+ (id)configurationPromiseWithBag:(id)a0;

- (id)initWithMetricsDictionary:(id)a0;
- (id)modifierForEvent:(id)a0;
- (void)prepareForFlush;
- (id)_generateModifiersIfNeeded;
- (void).cxx_destruct;

@end
