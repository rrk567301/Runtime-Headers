@interface TransientProcessState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char isFullscreen;
@property struct { unsigned int val[8]; } auditToken;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
