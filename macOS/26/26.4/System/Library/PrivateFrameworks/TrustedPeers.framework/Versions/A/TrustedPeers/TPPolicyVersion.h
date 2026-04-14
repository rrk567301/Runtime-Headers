@class NSString;

@interface TPPolicyVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long versionNumber;
@property (readonly, retain) NSString *policyHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithVersion:(unsigned long long)a0 hash:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
