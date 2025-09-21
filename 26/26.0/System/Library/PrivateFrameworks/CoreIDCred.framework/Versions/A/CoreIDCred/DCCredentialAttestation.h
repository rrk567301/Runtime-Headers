@class NSData;

@interface DCCredentialAttestation : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_attestationData;
    unsigned long long _attestationType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *attestationData;
@property unsigned long long attestationType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(unsigned long long)a1;

@end
