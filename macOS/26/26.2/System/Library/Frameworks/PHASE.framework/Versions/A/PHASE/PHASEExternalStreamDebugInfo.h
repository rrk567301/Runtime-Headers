@class AVAudioFormat;

@interface PHASEExternalStreamDebugInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AVAudioFormat *clientFormat;
@property (readonly, nonatomic, getter=isInput) BOOL input;
@property (readonly, nonatomic, getter=isStreamPaused) BOOL streamPaused;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setInput:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setClientFormat:(id)a0;
- (void)setStreamPaused:(BOOL)a0;

@end
