@class NSString;

@interface WebServerConfig : NSObject {
    NSString *_configurationDirectory;
}

+ (id)sharedWebServerConfig;
+ (id)sharedRemoteAdminServerConfig;

- (void)dealloc;
- (id)initWithConfigurationDirectory:(id)a0;
- (void)startWebServer;
- (void)stopWebServer;
- (void)restartWebServer;
- (BOOL)isWebServerRunning;
- (BOOL)isValidServerName:(id)a0;
- (id)webServerName;

@end
