@class NSString, NSObject;
@protocol DNDSDrivingTriggerManagerDataSource, OS_dispatch_queue, DNDSAutomationManagerDataSource;

@interface DNDSDrivingTriggerManager : NSObject <DNDSAutomationManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
}

@property (weak, nonatomic) id<DNDSDrivingTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (void).cxx_destruct;
- (id)init;

@end
