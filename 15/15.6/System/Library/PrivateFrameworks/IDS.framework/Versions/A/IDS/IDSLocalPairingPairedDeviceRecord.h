@class NSUUID;

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *cbuuid;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_publicIdenityForDataProtectionClass:(unsigned int)a0 error:(id *)a1;
- (id)initWithCBUUID:(id)a0 publicIdentityDataClassA:(id)a1 classC:(id)a2 classD:(id)a3;
- (id)publicIdentityClassA:(id *)a0;
- (id)publicIdentityClassC:(id *)a0;
- (id)publicIdentityClassD:(id *)a0;

@end
