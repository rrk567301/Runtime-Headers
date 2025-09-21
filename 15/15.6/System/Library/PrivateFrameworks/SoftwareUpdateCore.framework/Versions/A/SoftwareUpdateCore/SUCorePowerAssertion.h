@interface SUCorePowerAssertion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int activeAssertionCount;
@property (nonatomic) unsigned int assertionID;

- (id)copy;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;

@end
