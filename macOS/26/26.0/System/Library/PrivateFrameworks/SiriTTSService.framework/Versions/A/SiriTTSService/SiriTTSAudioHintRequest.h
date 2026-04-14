@class NSString, SiriTTSAudibleContext, SiriTTSSynthesisVoice;

@interface SiriTTSAudioHintRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;
@property (nonatomic) long long dialogNumber;
@property (nonatomic) BOOL useCompactHints;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setImmediate:(BOOL)a0;
- (BOOL)immediate;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:(unsigned int)a0;
- (id /* block */)didStartSpeaking;
- (id)initWithVoice:(id)a0 dialogNumber:(long long)a1 useCompactHints:(BOOL)a2;
- (float)playbackVolume;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setSiriAceViewId:(id)a0;
- (void)setSiriRequestId:(id)a0;
- (id)siriAceViewId;
- (id)siriRequestId;

@end
