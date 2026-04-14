@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying>

@property (class, readonly) unsigned long long preferredAttestationStyle;

@property (copy) NSString *clientCertLabel;
@property (copy) NSString *intermediateCertLabel;
@property (copy) NSString *label;
@property unsigned long long purpose;
@property BOOL regenerateKeys;
@property unsigned long long style;
@property BOOL authenticationFallbackVisible;
@property BOOL displayAuthenticationReason;
@property (copy) NSString *prompt;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)a0;
- (BOOL)_compareString:(id)a0 withString:(id)a1;

@end
