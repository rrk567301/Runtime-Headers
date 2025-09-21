@class NSString;
@protocol DNDSHearingTestTriggerManagerDataSource, DNDSAutomationManagerDataSource;

@interface DNDSHearingTestTriggerManager : NSObject <DNDSAutomationManager>

@property (weak, nonatomic) id<DNDSHearingTestTriggerManagerDataSource, DNDSAutomationManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (void).cxx_destruct;
- (void)refreshWithEvent:(id)a0;

@end
