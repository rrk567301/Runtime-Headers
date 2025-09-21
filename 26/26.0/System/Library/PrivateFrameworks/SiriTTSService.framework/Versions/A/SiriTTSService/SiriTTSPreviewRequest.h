@class SiriTTSSynthesisVoice, NSString, NSURL, SiriTTSAudibleContext;

@interface SiriTTSPreviewRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol> {
    void /* function */ language;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) long long previewType;
@property (nonatomic, readonly) NSURL *previewAudioURL;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setImmediate:(BOOL)a0;
- (BOOL)immediate;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:(unsigned int)a0;
- (id)initWithVoice:(id)a0 previewType:(long long)a1;
- (id /* block */)didStartSpeaking;
- (float)playbackVolume;
- (void)setDidStartSpeaking:(id /* block */)a0;
- (void)setPlaybackVolume:(float)a0;
- (void)setSiriAceViewId:(id)a0;
- (void)setSiriRequestId:(id)a0;
- (id)siriAceViewId;
- (id)siriRequestId;

@end
