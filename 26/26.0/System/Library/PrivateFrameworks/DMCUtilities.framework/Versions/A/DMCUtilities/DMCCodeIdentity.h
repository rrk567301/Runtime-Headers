@class NSString;

@interface DMCCodeIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *codeSigningID;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *path;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCodeSigningID:(id)a0 teamID:(id)a1 path:(id)a2;
- (BOOL)isEqualToCodeIdentity:(id)a0;
- (BOOL)verifyAgainst:(id)a0;

@end
