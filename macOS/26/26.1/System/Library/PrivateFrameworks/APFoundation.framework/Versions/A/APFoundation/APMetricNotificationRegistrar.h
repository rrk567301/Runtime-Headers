@class NSLock, NSMutableDictionary, NSString;

@interface APMetricNotificationRegistrar : NSObject <APMetricNotificationRegister, APMetricReceiving>

@property (readonly, nonatomic) NSMutableDictionary *registryByPurpose;
@property (readonly, nonatomic) NSMutableDictionary *registryByClosure;
@property (readonly, nonatomic) NSMutableDictionary *registryToAllPurpose;
@property (readonly, nonatomic) NSMutableDictionary *registryToInternalPurpose;
@property (readonly, nonatomic) NSMutableDictionary *registryToExternalPurpose;
@property (readonly, nonatomic) NSLock *registryLock;
@property (readonly, nonatomic) long long registrationCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)registerHandlerForInternalPurposesAndAllMetricsWithClosure:(id /* block */)a0;
- (void)receivedMetric:(id)a0;
- (long long)registerHandlerForPurpose:(long long)a0 closure:(id /* block */)a1;
- (void)removeHandlerWithIdentifier:(long long)a0;
- (long long)registerHandlerForPurpose:(long long)a0 andMetric:(long long)a1 closure:(id /* block */)a2;
- (id)_closuresForPurpose:(long long)a0 andMetric:(long long)a1;
- (void).cxx_destruct;
- (long long)_registerHandlerInRegistry:(id)a0 closure:(id /* block */)a1;
- (id)_metricRegistryForPurpose:(long long)a0 andMetric:(long long)a1;
- (long long)registerHandlerForAllPurposesAndAllMetricsWithClosure:(id /* block */)a0;
- (long long)registerHandlerForExternalPurposesAndAllMetricsWithClosure:(id /* block */)a0;
- (id)init;
- (id)_closuresForRegisteredForNonSpecificPurposeInternal:(BOOL)a0;

@end
