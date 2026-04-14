@class IOCAudioConfig;

@interface IOCStateUpdate : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int state;
@property (nonatomic) int reason;
@property (retain, nonatomic) IOCAudioConfig *audioConfig;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(int)a0 updateReason:(int)a1 audioConfig:(id)a2;

@end
