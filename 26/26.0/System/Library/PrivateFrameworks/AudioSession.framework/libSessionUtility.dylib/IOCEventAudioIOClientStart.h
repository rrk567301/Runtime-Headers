@class AVAudioIOClient;

@interface IOCEventAudioIOClientStart : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AVAudioIOClient *client;

- (id)initWithClient:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
