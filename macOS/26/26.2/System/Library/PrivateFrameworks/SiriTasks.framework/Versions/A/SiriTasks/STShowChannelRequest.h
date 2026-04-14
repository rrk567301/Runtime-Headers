@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest

@property (readonly, nonatomic) STMediaChannel *channel;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithChannel:(id)a0;

@end
