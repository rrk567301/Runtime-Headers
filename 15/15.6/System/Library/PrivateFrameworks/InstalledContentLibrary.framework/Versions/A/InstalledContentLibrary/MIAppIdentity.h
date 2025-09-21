@class NSString;

@interface MIAppIdentity : NSObject <MIAppIdentityPersonaResolver, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *personaUniqueString;
@property (nonatomic) char isResolved;

+ (char)validateAppIdentity:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;
- (id)initWithBundleID:(id)a0 persona:(id)a1;
- (char)resolvePersonaWithError:(id *)a0;

@end
