@interface SUOSUPowerSource : NSObject

@property (copy) id /* block */ stateChangeBlock;
@property int notifyToken;
@property (readonly) char connectedToAC;
@property (readonly) unsigned long long percentBatteryRemaining;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startObservingStateChangesWithBlock:(id /* block */)a0;
- (void)stopObservingStateChanges;

@end
