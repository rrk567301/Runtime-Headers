@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) unsigned long long preferredAttestationStyle;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *clientCertLabel;
@property (copy) NSString *intermediateCertLabel;
@property (copy) NSString *label;
@property unsigned long long purpose;
@property BOOL regenerateKeys;
@property unsigned long long style;
@property BOOL authenticationFallbackVisible;
@property BOOL displayAuthenticationReason;
@property (copy) NSString *prompt;

- (BOOL)_compareString:(id)a0 withString:(id)a1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)optionsDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptionsDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
