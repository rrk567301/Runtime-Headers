@interface SUOSUPowerSource : NSObject

@property (copy) id /* block */ stateChangeBlock;
@property int notifyToken;
@property (readonly) BOOL connectedToAC;
@property (readonly) BOOL lowBattery;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)fakeLowBatterySet;
- (void)startObservingStateChangesWithBlock:(id /* block */)a0;
- (void)stopObservingStateChanges;

@end
