@interface SUOSUPowerSource : NSObject

@property (copy) id /* block */ stateChangeBlock;
@property int notifyToken;
@property (readonly) BOOL connectedToAC;
@property (readonly) unsigned long long percentBatteryRemaining;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startObservingStateChangesWithBlock:(id /* block */)a0;
- (void)stopObservingStateChanges;

@end
