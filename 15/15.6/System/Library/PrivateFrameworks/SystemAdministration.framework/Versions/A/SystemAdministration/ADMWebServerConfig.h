@class NSString;

@interface ADMWebServerConfig : NSObject {
    NSString *_configurationDirectory;
}

+ (id)sharedRemoteAdminServerConfig;
+ (id)sharedWebServerConfig;

- (void)dealloc;
- (id)initWithConfigurationDirectory:(id)a0;
- (char)isValidServerName:(id)a0;
- (char)isWebServerRunning;
- (void)restartWebServer;
- (void)startWebServer;
- (void)stopWebServer;
- (id)webServerName;

@end
