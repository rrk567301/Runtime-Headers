@class NSString, NSDictionary;

@interface CKAuthenticationSettings : NSObject <NSCopying, NSSecureCoding> {
    NSString *__password;
    char __loginToiCloud;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *_password;
@property char _loginToiCloud;
@property (copy) NSString *suggestedUsername;
@property (copy) NSDictionary *authenticateArguments;
@property (copy) NSDictionary *createAccountArguments;
@property char forceAccount;
@property char createSession;
@property char showHelp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
