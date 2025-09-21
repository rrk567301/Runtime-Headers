@class NSXPCConnection;

@interface PowerModeConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (char)updateAllowOnCharger:(id)a0 withState:(char)a1;
- (char)disablePowerMode:(id)a0;
- (char)enablePowerMode:(id)a0;
- (char)updateEntryDelay:(id)a0 withDelay:(double)a1;
- (char)updateMaxEngagementDuration:(id)a0 withDuration:(double)a1;
- (char)updatePowerMode:(id)a0 withState:(char)a1;

@end
