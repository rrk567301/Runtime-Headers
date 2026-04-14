@class SiriTTSSynthesisContext, NSString;

@interface SiriTTSSynthesisRequest : SiriTTSBaseRequest <SiriTTSSynthesizingRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ synthesisContext;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (float)volume;
- (id)text;
- (id)contextInfo;
- (void)setVolume:(float)a0;
- (id)voice;
- (void)setVoice:(id)a0;
- (void)setRate:(float)a0;
- (float)rate;
- (void)setContextInfo:(id)a0;
- (float)pitch;
- (void)setPitch:(float)a0;
- (void)setText:(id)a0;
- (BOOL)privacySensitive;
- (void)setPrivacySensitive:(BOOL)a0;
- (id)customResourceURLs;
- (void)setCustomResourceURLs:(id)a0;
- (BOOL)disableCompactVoice;
- (void)setDisableCompactVoice:(BOOL)a0;
- (long long)synthesisProfile;
- (void)setSynthesisProfile:(long long)a0;
- (id)prosodyProperties;
- (void)setProsodyProperties:(id)a0;
- (id /* block */)didGenerateAudio;
- (void)setDidGenerateAudio:(id /* block */)a0;
- (id /* block */)didGenerateWordTimings;
- (void)setDidGenerateWordTimings:(id /* block */)a0;
- (BOOL)whisper;
- (void)setWhisper:(BOOL)a0;
- (id)initWithText:(id)a0 voice:(id)a1;

@end
