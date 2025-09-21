@class NSMutableDictionary, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AppletConfigurationData : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSUserDefaults *userDefaults;
    NSDictionary *config;
    NSMutableDictionary *pluginCache;
    unsigned long long maErrorCount;
    BOOL retryInProgress;
    double maMetadataQueryInterval;
}

+ (id)getSlalomSettings;
+ (BOOL)setConfiguration:(id)a0;
+ (id)dataHash;
+ (id)getDreamworksSettings;
+ (id)getNFCSettings;
+ (id)getCalypsoSettings;
+ (void)init;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)getWuluSettings;
+ (id)getExpressModeSettings;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)getHerculesSettings;
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getStaticConfig;
+ (id)scriptForModule:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
