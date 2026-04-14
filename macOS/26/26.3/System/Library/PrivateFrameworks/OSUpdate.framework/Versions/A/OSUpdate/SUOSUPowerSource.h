@interface SUOSUPowerSource : NSObject

@property (copy) id /* block */ stateChangeBlock;
@property int notifyToken;
@property (readonly) BOOL connectedToAC;
@property (readonly) unsigned long long percentBatteryRemaining;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startObservingStateChangesWithBlock:(id /* block */)a0;
- (void)stopObservingStateChanges;

@end
