@interface CKContextFingerprintMinHash : CKContextFingerprint

@property (readonly, nonatomic) unsigned int numHashes;
@property (readonly, nonatomic) int *hashes;

+ (char)supportsSecureCoding;
+ (id)parse:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)compareFingerprintWith:(id)a0;
- (id)initWithHashes:(int *)a0 count:(unsigned int)a1;

@end
