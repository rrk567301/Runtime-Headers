@class NSData;

@interface FMDBAAAttestation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *attestation;
@property (retain, nonatomic) NSData *signature;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttestation:(id)a0 signature:(id)a1;

@end
