@class NSData, MSAlgorithmIdentifier;

@interface MSMessageImprint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) MSAlgorithmIdentifier *algorithmIdentifier;
@property (retain) NSData *hashedMessage;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)expectedHashLength:(id)a0;
- (id)init:(id)a0 hashedMessage:(id)a1;
- (id)initWithMessageImprint:(struct MessageImprint { struct AlgorithmIdentifier { struct heim_oid { unsigned long long x0; unsigned int *x1; } x0; struct heim_base_data *x1; } x0; struct heim_base_data { unsigned long long x0; void *x1; } x1; } *)a0;
- (BOOL)isEqualToMessageImprint:(id)a0 error:(id *)a1;
- (BOOL)isSupportedHashAlgorithm:(id)a0;

@end
