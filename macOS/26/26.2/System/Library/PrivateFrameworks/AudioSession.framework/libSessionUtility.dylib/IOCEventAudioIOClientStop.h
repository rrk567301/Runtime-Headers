@class AVAudioIOClient;

@interface IOCEventAudioIOClientStop : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AVAudioIOClient *client;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
