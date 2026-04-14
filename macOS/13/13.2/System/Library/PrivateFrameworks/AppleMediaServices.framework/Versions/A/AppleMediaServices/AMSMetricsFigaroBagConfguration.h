@class NSArray, NSDictionary, AMSMetricsFigaroEventModifier, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMetricsFigaroBagConfguration : NSObject

@property (readonly) NSDictionary *metricsDictionary;
@property (readonly) NSArray *overrides;
@property (readonly) AMSMetricsFigaroEventModifier *defaultModifier;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)configurationWithBag:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithMetricsDictionary:(id)a0;
- (void)prepareForFlush;
- (id)modifierForEvent:(id)a0;
- (id)_generateModifiersIfNeeded;

@end
