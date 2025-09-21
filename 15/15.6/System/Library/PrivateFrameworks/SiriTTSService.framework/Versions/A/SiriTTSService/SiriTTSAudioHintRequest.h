@class NSString, SiriTTSAudibleContext;

@interface SiriTTSAudioHintRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol>

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic) void /* unknown type, empty encoding */ dialogNumber;
@property (nonatomic) void /* unknown type, empty encoding */ useCompactHints;
@property (nonatomic, readonly) char isValid;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setImmediate:(char)a0;
- (char)immediate;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:(unsigned int)a0;
- (id /* block */)didStartSpeaking;
- (id)initWithVoice:(id)a0 dialogNumber:(long long)a1 useCompactHints:(char)a2;
- (float)playbackVolume;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setSiriAceViewId:(id)a0;
- (void)setSiriRequestId:(id)a0;
- (id)siriAceViewId;
- (id)siriRequestId;

@end
