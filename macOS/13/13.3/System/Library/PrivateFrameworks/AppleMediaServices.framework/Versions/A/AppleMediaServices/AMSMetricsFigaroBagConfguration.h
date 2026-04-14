@class NSArray, NSDictionary, AMSMetricsFigaroEventModifier, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMetricsFigaroBagConfguration : NSObject

@property (readonly) NSDictionary *metricsDictionary;
@property (readonly) NSArray *overrides;
@property (readonly) AMSMetricsFigaroEventModifier *defaultModifier;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)configurationPromiseWithBag:(id)a0;

- (void).cxx_destruct;
- (void)prepareForFlush;
- (id)_generateModifiersIfNeeded;
- (id)initWithMetricsDictionary:(id)a0;
- (id)modifierForEvent:(id)a0;

@end
