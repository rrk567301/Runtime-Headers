@class NSData;

@interface FMDBAAAttestation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *attestation;
@property (retain, nonatomic) NSData *signature;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttestation:(id)a0 signature:(id)a1;

@end
