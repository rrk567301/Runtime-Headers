@class SiriTTSSynthesisContext, SiriTTSAudibleContext, NSString;

@interface SiriTTSSpeechRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol, SiriTTSSynthesizingRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, readonly) NSString *description;

- (void)setPitch:(float)a0;
- (void)setRate:(float)a0;
- (float)rate;
- (void)setVolume:(float)a0;
- (float)pitch;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setText:(id)a0;
- (float)volume;
- (id)text;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setVoice:(id)a0;
- (id)voice;
- (void)setContextInfo:(id)a0;
- (void)setPrivacySensitive:(BOOL)a0;
- (id)contextInfo;
- (void)setImmediate:(BOOL)a0;
- (BOOL)immediate;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:(unsigned int)a0;
- (id)initWithText:(id)a0 voice:(id)a1;
- (BOOL)whisper;
- (id)customResourceURLs;
- (id /* block */)didGenerateAudio;
- (id /* block */)didGenerateWordTimings;
- (id /* block */)didStartSpeaking;
- (BOOL)disableCompactVoice;
- (BOOL)minimizeDeviceUsage;
- (float)playbackVolume;
- (BOOL)privacySensitive;
- (id)prosodyProperties;
- (void)setCustomResourceURLs:(id)a0;
- (void)setDidGenerateAudio:(id /* block */)a0;
- (void)setDidGenerateWordTimings:(id /* block */)a0;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setDisableCompactVoice:(BOOL)a0;
- (void)setMinimizeDeviceUsage:(BOOL)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setProsodyProperties:(id)a0;
- (void)setSiriAceViewId:(id)a0;
- (void)setSiriRequestId:(id)a0;
- (void)setSynthesisPriority:(long long)a0;
- (void)setSynthesisProfile:(long long)a0;
- (void)setWhisper:(BOOL)a0;
- (id)siriAceViewId;
- (id)siriRequestId;
- (long long)synthesisPriority;
- (long long)synthesisProfile;

@end
