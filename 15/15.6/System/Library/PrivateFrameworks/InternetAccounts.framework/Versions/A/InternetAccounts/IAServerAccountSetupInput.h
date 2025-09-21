@class NSString;

@interface IAServerAccountSetupInput : IAAccountSetupInput

@property (retain) NSString *serverName;
@property (retain) NSString *serverAddress;
@property char enableMail;
@property char enableJabber;
@property char enableCalDAV;
@property char enableCardDAV;
@property char enableVPN;

- (void).cxx_destruct;

@end
