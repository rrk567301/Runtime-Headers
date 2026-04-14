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
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)scriptForModule:(id)a0;
+ (id)getCalypsoSettings;
+ (id)getNFCSettings;
+ (id)getHerculesSettings;
+ (id)getDreamworksSettings;
+ (id)getStaticConfig;
+ (id)getExpressModeSettings;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)getSlalomSettings;
+ (BOOL)setConfiguration:(id)a0;
+ (void)init;
+ (id)dataHash;

- (void).cxx_destruct;
- (id)init;

@end
