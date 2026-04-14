@class ASTControlCommand, ASTIdentity;

@interface ASTContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long clientStatus;
@property long long command;
@property BOOL testSuiteRunning;
@property (readonly) ASTControlCommand *controlCommand;
@property (readonly, copy) ASTIdentity *identity;

- (id)initWithIdentity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
