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

+ (id)getWuluSettings;
+ (id)getHerculesSettings;
+ (void)init;
+ (id)getDreamworksSettings;
+ (id)getStaticConfig;
+ (id)dataHash;
+ (id)pluginDecoderForMid:(id)a0;
+ (BOOL)setConfiguration:(id)a0;
+ (id)getCalypsoSettings;
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getNFCSettings;
+ (id)getSlalomSettings;
+ (id)scriptForModule:(id)a0;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)getExpressModeSettings;

- (id)init;
- (void).cxx_destruct;

@end
