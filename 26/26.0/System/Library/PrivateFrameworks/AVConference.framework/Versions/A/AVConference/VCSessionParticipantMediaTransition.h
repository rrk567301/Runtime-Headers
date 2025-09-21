@interface VCSessionParticipantMediaTransition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int mediaType;
@property (readonly, nonatomic) unsigned int toState;
@property (readonly, nonatomic) unsigned int fromState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMediaType:(unsigned int)a0 fromState:(unsigned int)a1 toState:(unsigned int)a2;

@end
