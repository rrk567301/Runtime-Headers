@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AppletConfigurationData : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSDictionary *config;
    NSMutableDictionary *pluginCache;
    unsigned long long maErrorCount;
    BOOL retryInProgress;
    double maMetadataQueryInterval;
}

+ (id)getSlalomSettings;
+ (id)plasticCardScriptForModule:(id)a0;
+ (id)getHerculesSettings;
+ (BOOL)setConfiguration:(id)a0;
+ (id)pluginDecoderForMid:(id)a0;
+ (id)getExpressModeSettings;
+ (id)getNFCSettings;
+ (id)getDreamworksSettings;
+ (void)init;
+ (id)scriptForModule:(id)a0;
+ (id)dataHash;
+ (id)getWuluSettings;
+ (id)extraDebugScriptForModule:(id)a0;
+ (id)getCalypsoSettings;
+ (id)getStaticConfig;

- (void).cxx_destruct;
- (id)init;

@end
