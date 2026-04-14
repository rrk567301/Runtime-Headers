@interface SUCorePowerAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int activeAssertionCount;
@property (nonatomic) unsigned int assertionID;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)init;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
