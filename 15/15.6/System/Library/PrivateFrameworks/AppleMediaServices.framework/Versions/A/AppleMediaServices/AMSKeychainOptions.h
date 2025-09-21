@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) unsigned long long preferredAttestationStyle;
@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *clientCertLabel;
@property (copy) NSString *intermediateCertLabel;
@property (copy) NSString *label;
@property unsigned long long purpose;
@property char regenerateKeys;
@property unsigned long long style;
@property char authenticationFallbackVisible;
@property char displayAuthenticationReason;
@property (copy) NSString *prompt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)optionsDictionary;
- (char)_compareString:(id)a0 withString:(id)a1;
- (id)initWithOptionsDictionary:(id)a0;

@end
