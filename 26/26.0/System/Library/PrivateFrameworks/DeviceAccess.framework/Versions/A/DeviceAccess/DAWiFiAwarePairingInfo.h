@class NSString;

@interface DAWiFiAwarePairingInfo : NSObject <CUXPCCodable>

@property (nonatomic) BOOL accept;
@property (readonly, nonatomic) unsigned long long wifiAwareIdentifier;
@property (readonly, nonatomic) long long pairingType;
@property (retain, nonatomic) NSString *passkey;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWiFiAwareIdentifier:(unsigned long long)a0 pairingType:(long long)a1;

@end
