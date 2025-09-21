@class NSString;

@interface TPPolicyVersion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long versionNumber;
@property (readonly, retain) NSString *policyHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 hash:(id)a1;

@end
