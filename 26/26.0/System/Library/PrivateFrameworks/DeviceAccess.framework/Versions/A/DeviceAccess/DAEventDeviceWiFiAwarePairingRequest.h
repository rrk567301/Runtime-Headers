@class DAWiFiAwarePairingInfo;

@interface DAEventDeviceWiFiAwarePairingRequest : DAEvent

@property (copy, nonatomic) DAWiFiAwarePairingInfo *pairingInfo;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 pairingInfo:(id)a1;

@end
