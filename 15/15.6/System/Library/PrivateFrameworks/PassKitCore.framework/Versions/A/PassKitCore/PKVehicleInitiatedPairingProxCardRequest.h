@class PKCarUnlockSupportedTerminal;

@interface PKVehicleInitiatedPairingProxCardRequest : PKProxCardRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKCarUnlockSupportedTerminal *supportedTerminal;
@property (readonly, nonatomic) unsigned long long referralSource;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSupportedTerminal:(id)a0 referralSource:(unsigned long long)a1;

@end
