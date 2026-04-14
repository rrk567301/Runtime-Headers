@class NSString;

@interface SiriTTSAudioHintRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ audibleContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voice;
@property (nonatomic) void /* unknown type, empty encoding */ dialogNumber;
@property (nonatomic) void /* unknown type, empty encoding */ useCompactHints;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVoice:(id)a0 dialogNumber:(long long)a1 useCompactHints:(BOOL)a2;

@end
