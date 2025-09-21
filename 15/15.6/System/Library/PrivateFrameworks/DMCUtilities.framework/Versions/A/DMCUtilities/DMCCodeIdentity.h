@class NSString;

@interface DMCCodeIdentity : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *codeSigningID;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *path;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCodeSigningID:(id)a0 teamID:(id)a1 path:(id)a2;
- (char)isEqualToCodeIdentity:(id)a0;
- (char)verifyAgainst:(id)a0;

@end
