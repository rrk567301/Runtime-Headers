@class NSObject;
@protocol OS_os_log;

@interface BKUIFingerSecurePairingStateObserver : NSObject {
    NSObject<OS_os_log> *secure_pairing_state_watcher_logs;
}

@property (nonatomic) int pairingNotificationObserverToken;
@property (nonatomic) int pairingNotificationReadToken;
@property (nonatomic) BOOL keyboardWasPairing;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)pairedAccessory;
- (id)initForMacBuddy;
- (id)initWithPairingStateObserver:(id /* block */)a0;
- (void)registerForSecurePairingStateObserver:(id /* block */)a0;
- (unsigned long long)pairingUIDisplayState;
- (BOOL)isBKDevicePaired;
- (void)_invalidateTokenIfNeeded:(int)a0;

@end
