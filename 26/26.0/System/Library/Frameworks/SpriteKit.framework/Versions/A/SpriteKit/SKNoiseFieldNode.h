@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (BOOL)supportsSecureCoding;

- (void)_initialize;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_descriptionClassName;

@end
