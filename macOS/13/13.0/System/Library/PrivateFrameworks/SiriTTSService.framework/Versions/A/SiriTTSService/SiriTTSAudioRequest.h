@class NSString, SiriTTSAudibleContext;

@interface SiriTTSAudioRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ audio;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setImmediate:(BOOL)a0;
- (BOOL)immediate;
- (unsigned int)audioSessionId;
- (void)setAudioSessionId:(unsigned int)a0;
- (id)initWithAudio:(id)a0;
- (id)siriRequestId;
- (void)setSiriRequestId:(id)a0;
- (id /* block */)didStartSpeaking;
- (void)setDidStartSpeaking:(id /* block */)a0;

@end
