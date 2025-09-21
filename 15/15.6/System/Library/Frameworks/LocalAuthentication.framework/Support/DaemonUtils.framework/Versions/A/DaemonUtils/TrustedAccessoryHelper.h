@interface TrustedAccessoryHelper : NSObject

+ (id)sharedInstance;

- (char)_checkPairingState:(long long)a0 device:(id)a1 error:(id *)a2;
- (char)_checkPairingStateIn:(id)a0 device:(id)a1 error:(id *)a2;
- (char)_isConnectedDeviceInState:(long long)a0 description:(id)a1 error:(id *)a2;
- (char)_isConnectedDeviceInStates:(id)a0 description:(id)a1 error:(id *)a2;
- (char)authorizeDevice:(id)a0 externalizedContext:(id)a1 error:(id *)a2;
- (id)connectedDevicesWithError:(id *)a0;
- (id)deviceManagerWithError:(id *)a0;
- (char)isAuthorizedDeviceConnectedWithError:(id *)a0;
- (char)isPairedDeviceConnectedWithError:(id *)a0;
- (char)isTrustedAccessorySupported;
- (char)isUnauthorizedDeviceConnectedWithError:(id *)a0;
- (id)unauthorizedDeviceWithUid:(id)a0 error:(id *)a1;

@end
