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

+ (void)init;
+ (BOOL)setConfiguration:(id)a0;
+ (id)getSlalomSettings;
+ (id)getWuluSettings;
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getStaticConfig;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)dataHash;
+ (id)scriptForModule:(id)a0;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)getNFCSettings;
+ (id)getHerculesSettings;
+ (id)getExpressModeSettings;

- (id)init;
- (void).cxx_destruct;

@end
