@class SiriTTSSynthesisVoice, NSString, SiriTTSSynthesisResource, NSArray;

@interface SiriTTSInstrumentationMetrics : NSObject <NSSecureCoding> {
    void /* function */ utterance;
    void /* function */ audioOutputRoute;
    void /* function */ clientBundleIdentifier;
    void /* function */ experimentIdentifier;
    void /* unknown type, empty encoding */ synthesisFirstAudioTime;
    void /* function */ encounteredIssues;
    void /* function */ dynamicPromptVoice;
    void /* function */ dynamicPromptStyle;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *voiceAssetKey;
@property (nonatomic, readonly) NSString *voiceResourceAssetKey;
@property (nonatomic, copy) NSString *utterance;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;
@property (nonatomic, retain) SiriTTSSynthesisResource *resource;
@property (nonatomic, copy) NSString *audioOutputRoute;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) NSString *experimentIdentifier;
@property (nonatomic) unsigned long long requestCreatedTime;
@property (nonatomic) double eagerRequestGapInterval;
@property (nonatomic) unsigned long long synthesisBeginTime;
@property (nonatomic) unsigned long long synthesisEndTime;
@property (nonatomic) unsigned long long speechBeginTime;
@property (nonatomic) unsigned long long speechEndTime;
@property (nonatomic) unsigned long long speechEstimatedOutputBeginTime;
@property (nonatomic) double audioStartLatency;
@property (nonatomic) unsigned long long serverFirstPacketTime;
@property (nonatomic) unsigned long long serverLastPacketTime;
@property (nonatomic) double serverStreamedAudioDuration;
@property (nonatomic) double audioDuration;
@property (nonatomic) BOOL isWarmStart;
@property (nonatomic) long long sourceOfTTS;
@property (nonatomic) BOOL privacySensitive;
@property (nonatomic) BOOL minimizeDeviceUsage;
@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSArray *encounteredIssues;
@property (nonatomic) BOOL isServerTTSRacing;
@property (nonatomic) long long promptCount;
@property (nonatomic) BOOL neuralAlignmentStall;
@property (nonatomic) BOOL neuralAudioClick;
@property (nonatomic) BOOL synthesisQualityIssue;
@property (nonatomic) BOOL useHydraFrontend;
@property (nonatomic) BOOL neuralFallback;
@property (nonatomic) BOOL isAudibleRequest;
@property (nonatomic) long long deviceThermalState;
@property (nonatomic) int deviceThermalLevel;
@property (nonatomic, copy) NSString *dynamicPromptVoice;
@property (nonatomic, copy) NSString *dynamicPromptStyle;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
