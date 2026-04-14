@class LAAuthenticationMethods, NSString, NSDictionary, LAAuthenticationEntry, LAAuthenticationUsers;

@interface LAAuthenticationServerProtocolResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *authenticationResult;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) LAAuthenticationMethods *methods;
@property (retain, nonatomic) LAAuthenticationUsers *users;
@property (retain, nonatomic) LAAuthenticationEntry *entry;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
