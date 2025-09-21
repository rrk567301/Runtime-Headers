@interface SiriTTSAudibleContext : NSObject <NSSecureCoding> {
    void /* function */ didStartSpeaking;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int audioSessionId;
@property (nonatomic) BOOL immediate;
@property (nonatomic, copy) id /* block */ didStartSpeaking;
@property (nonatomic) float playbackVolume;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
