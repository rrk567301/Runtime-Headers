@interface NetworkQualityServerConfiguration : NSObject

@property (nonatomic) unsigned int httpProtocol;
@property (nonatomic) int listenPort;
@property (nonatomic) unsigned int idleTimeoutSeconds;
@property (nonatomic) char tlsEnabled;
@property (nonatomic) char bonjourEnabled;
@property (nonatomic) char mirrorServerIP;
@property (nonatomic) char l4sEnabled;
@property unsigned long long networkServiceType;

+ (unsigned int)defaultIdleTimeout;

- (id)init;

@end
