@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSMindfulnessTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource;

@interface DNDSMindfulnessTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
}

@property (weak, nonatomic) id<DNDSMindfulnessTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (BOOL)_featureEnabled;
- (void)_configureTriggerWithMode:(id)a0;

@end
