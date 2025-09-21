@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property long long type;
@property (readonly) NSString *address;
@property (readonly) long long port;
@property char authenticationRequired;
@property (copy) NSString *username;
@property (copy) NSString *password;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyPassword;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithAddress:(id)a0 port:(long long)a1;
- (id)initWithType:(long long)a0 address:(id)a1 port:(long long)a2;

@end
