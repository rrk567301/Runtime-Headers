@class NSString;

@interface SMCMNoMovementMonitor : RTService <NSObject>

@property (readonly, nonatomic) char isMonitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setIsMonitoring:(char)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)requestLatestStateUpdate;

@end
