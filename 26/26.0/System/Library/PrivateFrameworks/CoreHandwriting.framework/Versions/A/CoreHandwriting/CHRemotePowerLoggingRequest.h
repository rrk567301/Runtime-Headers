@interface CHRemotePowerLoggingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long modelIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithModel:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
