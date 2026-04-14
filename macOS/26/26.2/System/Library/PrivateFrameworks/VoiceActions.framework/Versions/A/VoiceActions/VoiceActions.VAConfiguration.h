@class NSString;

@interface VoiceActions.VAConfiguration : NSObject {
    void /* unknown type, empty encoding */ strideConfig;
    void /* unknown type, empty encoding */ fixedConfig;
    void /* unknown type, empty encoding */ tasrConfig;
    void /* unknown type, empty encoding */ resultGeneratorConfig;
    void /* unknown type, empty encoding */ vadModelFilename;
    void /* unknown type, empty encoding */ speechAPISpotterConfig;
    void /* unknown type, empty encoding */ attentionDetectionConfig;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
