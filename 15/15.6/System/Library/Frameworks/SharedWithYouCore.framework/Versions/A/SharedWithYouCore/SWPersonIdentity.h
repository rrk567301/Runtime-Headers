@class NSArray, NSData;

@interface SWPersonIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *publicKeys;
@property (readonly, nonatomic) NSData *trackingPreventionSalt;
@property (readonly, copy, nonatomic) NSData *rootHash;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRootHash:(id)a0 publicKeys:(id)a1 trackingPreventionSalt:(id)a2;
- (id)initWithRootHash:(id)a0;
- (char)isEqualToPersonIdentity:(id)a0;

@end
