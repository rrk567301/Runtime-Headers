@class NSLock, NSMutableDictionary, NSString;

@interface APMetricNotificationRegistrar : NSObject <APMetricNotificationRegister, APMetricReceiving>

@property (readonly, nonatomic) NSMutableDictionary *registryByRoute;
@property (readonly, nonatomic) NSMutableDictionary *registryByClosure;
@property (readonly, nonatomic) NSLock *registryLock;
@property (readonly, nonatomic) long long registrationCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)receivedMetric:(id)a0;
- (long long)registerHandlerForPurpose:(long long)a0 closure:(id /* block */)a1;
- (id)_closuresForPurpose:(long long)a0 andMetric:(long long)a1;
- (id)_metricRegistryForPurpose:(long long)a0 andMetric:(long long)a1;
- (long long)registerHandlerForPurpose:(long long)a0 andMetric:(long long)a1 closure:(id /* block */)a2;
- (void)removeHandlerWithIdentifier:(long long)a0;

@end
