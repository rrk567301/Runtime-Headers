@class AVAudioFormat;

@interface PHASEExternalStreamDebugInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) AVAudioFormat *clientFormat;
@property (readonly, nonatomic, getter=isInput) char input;
@property (readonly, nonatomic, getter=isStreamPaused) char streamPaused;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setInput:(char)a0;
- (void)setClientFormat:(id)a0;
- (void)setStreamPaused:(char)a0;

@end
