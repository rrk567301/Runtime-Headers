@interface CRKIdentityServiceMockingRequest : CATTaskRequest

@property (nonatomic) char shouldDisable;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
