@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)_initialize;
- (id)_descriptionClassName;

@end
