@class NSString;

@interface IAChatAccountSetupInput : IAAccountSetupInput

@property (retain) NSString *accountType;
@property (retain) NSString *loginName;
@property (retain) NSString *serverName;
@property long long serverPort;
@property char useSSL;
@property char useKerberosV5;

- (void).cxx_destruct;

@end
