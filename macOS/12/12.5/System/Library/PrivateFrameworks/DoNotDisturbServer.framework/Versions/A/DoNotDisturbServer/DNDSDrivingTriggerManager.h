@class NSString, NSObject;
@protocol DNDSDrivingTriggerManagerDataSource, OS_dispatch_queue, DNDSBiomeTriggerManagerDataSource;

@interface DNDSDrivingTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
}

@property (weak, nonatomic) id<DNDSDrivingTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;

@end
