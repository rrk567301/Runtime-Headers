@interface DMFSecurityInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char supportsBlockLevelEncryption;
@property (readonly, nonatomic) char supportsFileLevelEncryption;
@property (readonly, nonatomic) char passcodeIsSet;
@property (readonly, nonatomic) char passcodeIsCompliantWithGlobalRestrictions;
@property (readonly, nonatomic) char passcodeIsCompliantWithProfileRestrictions;
@property (readonly, nonatomic) unsigned long long passcodeLockGracePeriod;
@property (readonly, nonatomic) unsigned long long passcodeLockGracePeriodEnforced;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSupportsBlockLevelEncryption:(char)a0 supportsFileLevelEncryption:(char)a1 passcodeIsSet:(char)a2 passcodeIsCompliantWithGlobalRestrictions:(char)a3 passcodeIsCompliantWithProfileRestrictions:(char)a4 passcodeLockGracePeriodEnforced:(unsigned long long)a5 passcodeLockGracePeriod:(unsigned long long)a6;

@end
