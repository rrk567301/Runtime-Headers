@class NSString;

@interface SMCMNoMovementMonitor : RTService <NSObject>

@property (readonly, nonatomic) BOOL isMonitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)init;
- (void)setIsMonitoring:(BOOL)a0;
- (void)requestLatestStateUpdate;

@end
