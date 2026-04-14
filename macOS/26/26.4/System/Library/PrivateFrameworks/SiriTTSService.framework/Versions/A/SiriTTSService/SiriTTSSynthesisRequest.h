@class SiriTTSSynthesisContext, NSString;

@interface SiriTTSSynthesisRequest : SiriTTSBaseRequest <SiriTTSSynthesizingRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, retain) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, readonly) NSString *description;

- (float)rate;
- (void)setRate:(float)a0;
- (float)pitch;
- (float)volume;
- (void)setPitch:(float)a0;
- (void)setVolume:(float)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)text;
- (id)initWithCoder:(id)a0;
- (void)setText:(id)a0;
- (void)setVoice:(id)a0;
- (id)voice;
- (id)initWithText:(id)a0 voice:(id)a1;
- (void)setDisableCompactVoice:(BOOL)a0;
- (void)setPrivacySensitive:(BOOL)a0;
- (void)setContextInfo:(id)a0;
- (id)contextInfo;
- (BOOL)whisper;
- (id)customResourceURLs;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (BOOL)disableCompactVoice;
- (BOOL)minimizeDeviceUsage;
- (BOOL)privacySensitive;
- (id)prosodyProperties;
- (void)setCustomResourceURLs:(id)a0;
- (void)setDidGenerateAudio:(id /* block */)a0;
- (void)setDidGenerateWordTimings:(id /* block */)a0;
- (void)setMinimizeDeviceUsage:(BOOL)a0;
- (void)setProsodyProperties:(id)a0;
- (void)setSynthesisPriority:(long long)a0;
- (void)setSynthesisProfile:(long long)a0;
- (void)setWhisper:(BOOL)a0;
- (long long)synthesisPriority;
- (long long)synthesisProfile;

@end
