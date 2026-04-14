@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSGamingTriggerManagerDataSource, DNDSAutomationManagerDataSource;

@interface DNDSGamingTriggerManager : NSObject <DNDSAutomationManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
}

@property (weak, nonatomic) id<DNDSGamingTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (id)init;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (BOOL)_featureEnabled;
- (void)_configureTriggerWithMode:(id)a0;

@end
