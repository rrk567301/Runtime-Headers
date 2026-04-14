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

+ (id)dataHash;
+ (id)scriptForModule:(id)a0;
+ (id)getDreamworksSettings;
+ (id)getHerculesSettings;
+ (id)getExpressModeSettings;
+ (id)getSlalomSettings;
+ (id)getNFCSettings;
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getStaticConfig;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)getCalypsoSettings;
+ (BOOL)setConfiguration:(id)a0;
+ (id)getWuluSettings;
+ (id)plasticCardScriptForModule:(id)a0;
+ (void)init;

- (void).cxx_destruct;
- (id)init;

@end
