@class NSString;

@interface IAChatService : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *domainLabel;
@property (retain, nonatomic) NSString *accountLabel;
@property BOOL showUsernameField;
@property BOOL showPasswordField;
@property BOOL showServerHostField;
@property BOOL showServerPortField;
@property BOOL showUseSSLCheckbox;
@property BOOL showKerberosCheckbox;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
