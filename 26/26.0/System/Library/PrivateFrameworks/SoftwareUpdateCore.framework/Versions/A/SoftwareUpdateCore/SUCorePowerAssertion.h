@interface SUCorePowerAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int activeAssertionCount;
@property (nonatomic) unsigned int assertionID;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
