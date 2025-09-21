@class NSString, NSURL;

@interface IAEWSAccountSetupResult : IAAccountSetupResult

@property (retain) NSString *fullName;
@property (retain) NSString *email;
@property (retain) NSString *internalHost;
@property (retain) NSString *internalPath;
@property char internalUseSSL;
@property long long internalPort;
@property (retain) NSString *externalHost;
@property (retain) NSString *externalPath;
@property char externalUseSSL;
@property long long externalPort;
@property (retain) NSURL *internalURL;
@property (retain) NSURL *externalURL;
@property (retain) NSString *rootFolderID;
@property (retain) NSURL *autodiscoverURL;

- (void).cxx_destruct;

@end
