@interface CRKSetMuteStateRequest : CATTaskRequest

@property (nonatomic, getter=shouldMute) char mute;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
