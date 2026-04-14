@class NSString, NSDictionary;

@interface CKAuthenticationSettings : NSObject <NSCopying, NSSecureCoding> {
    NSString *__password;
    BOOL __loginToiCloud;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *_password;
@property BOOL _loginToiCloud;
@property (copy) NSString *suggestedUsername;
@property (copy) NSDictionary *authenticateArguments;
@property (copy) NSDictionary *createAccountArguments;
@property BOOL forceAccount;
@property BOOL createSession;
@property BOOL showHelp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
