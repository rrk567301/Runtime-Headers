@interface TransientProcessState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isFullscreen;
@property struct { unsigned int val[8]; } auditToken;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
