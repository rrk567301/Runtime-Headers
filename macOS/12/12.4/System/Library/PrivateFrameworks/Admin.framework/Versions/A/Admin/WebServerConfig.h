@class NSString;

@interface WebServerConfig : NSObject {
    NSString *_configurationDirectory;
}

+ (id)sharedWebServerConfig;
+ (id)sharedRemoteAdminServerConfig;

- (void)dealloc;
- (id)initWithConfigurationDirectory:(id)a0;
- (BOOL)isWebServerRunning;
- (void)stopWebServer;
- (void)startWebServer;
- (void)restartWebServer;
- (BOOL)isValidServerName:(id)a0;
- (id)webServerName;

@end
