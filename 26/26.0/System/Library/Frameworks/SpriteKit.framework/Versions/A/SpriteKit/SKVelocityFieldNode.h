@class SKTexture;

@interface SKVelocityFieldNode : SKFieldNode

@property (retain, nonatomic) SKTexture *velocityTexture;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;

+ (BOOL)supportsSecureCoding;

- (void)_initialize;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionClassName;

@end
