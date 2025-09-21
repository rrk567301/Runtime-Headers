@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SMWirelessController : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *wirelessNetworkSwitchCancellation;

+ (id)sharedController;

- (void).cxx_destruct;
- (char)attemptAccessPointAssocationWithSystem:(id)a0 error:(id *)a1;
- (char)attemptAccessPointAssocationWithSystem:(id)a0 timeout:(unsigned long long)a1 error:(id *)a2;
- (char)prepareSourceMachine:(id)a0 ssid:(id)a1 password:(id)a2 error:(id *)a3;
- (void)stopWirelessNetworkSwitch;
- (char)waitForReconnection:(id)a0 timeout:(double)a1 error:(id *)a2;

@end
