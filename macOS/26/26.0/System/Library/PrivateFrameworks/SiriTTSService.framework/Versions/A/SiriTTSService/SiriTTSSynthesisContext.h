@class SiriTTSSynthesisVoice, NSString, NSDictionary, NSArray, SiriTTSProsodyProperties;

@interface SiriTTSSynthesisContext : NSObject <NSSecureCoding> {
    void /* function */ text;
    void /* function */ contextInfo;
    void /* function */ customResourceURLs;
    void /* function */ didGenerateAudio;
    void /* function */ didGenerateWordTimings;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;
@property (nonatomic) BOOL privacySensitive;
@property (nonatomic) BOOL minimizeDeviceUsage;
@property (nonatomic, copy) NSDictionary *contextInfo;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (nonatomic, copy) NSArray *customResourceURLs;
@property (nonatomic) long long synthesisProfile;
@property (nonatomic) long long synthesisPriority;
@property (nonatomic) BOOL disableCompactVoice;
@property (nonatomic) BOOL disableThermalFallback;
@property (nonatomic, copy) id /* block */ didGenerateAudio;
@property (nonatomic, copy) id /* block */ didGenerateWordTimings;
@property (nonatomic) long long style;
@property (nonatomic) BOOL whisper;
@property (nonatomic, retain) SiriTTSProsodyProperties *prosodyProperties;
@property (nonatomic) BOOL forceOspreyTTS;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
