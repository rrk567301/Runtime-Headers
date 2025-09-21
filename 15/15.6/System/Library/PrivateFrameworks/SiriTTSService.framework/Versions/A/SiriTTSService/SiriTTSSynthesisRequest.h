@class SiriTTSSynthesisContext, NSString;

@interface SiriTTSSynthesisRequest : SiriTTSBaseRequest <SiriTTSSynthesizingRequestProtocol>

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ synthesisContext;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)rate;
- (void)setRate:(float)a0;
- (void)setVoice:(id)a0;
- (void)setVolume:(float)a0;
- (id)text;
- (id)voice;
- (float)volume;
- (void)setText:(id)a0;
- (float)pitch;
- (void)setPitch:(float)a0;
- (void)setContextInfo:(id)a0;
- (void)setPrivacySensitive:(char)a0;
- (id)contextInfo;
- (id)initWithText:(id)a0 voice:(id)a1;
- (char)whisper;
- (id)customResourceURLs;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (char)disableCompactVoice;
- (char)minimizeDeviceUsage;
- (char)privacySensitive;
- (id)prosodyProperties;
- (void)setCustomResourceURLs:(id)a0;
- (void)setDidGenerateAudio:(id /* block */)a0;
- (void)setDidGenerateWordTimings:(id /* block */)a0;
- (void)setDisableCompactVoice:(char)a0;
- (void)setMinimizeDeviceUsage:(char)a0;
- (void)setProsodyProperties:(id)a0;
- (void)setSynthesisProfile:(long long)a0;
- (void)setWhisper:(char)a0;
- (long long)synthesisProfile;

@end
