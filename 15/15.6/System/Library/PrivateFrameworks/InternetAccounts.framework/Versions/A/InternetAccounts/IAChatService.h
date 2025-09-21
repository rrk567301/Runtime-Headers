@class NSString;

@interface IAChatService : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *domainLabel;
@property (retain, nonatomic) NSString *accountLabel;
@property char showUsernameField;
@property char showPasswordField;
@property char showServerHostField;
@property char showServerPortField;
@property char showUseSSLCheckbox;
@property char showKerberosCheckbox;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
