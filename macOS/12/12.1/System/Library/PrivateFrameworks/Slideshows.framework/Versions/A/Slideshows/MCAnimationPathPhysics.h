@interface MCAnimationPathPhysics : MCAnimationPath

@property (nonatomic) float staticFriction;
@property (nonatomic) float kineticFriction;
@property (nonatomic) float skinFriction;

- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)_copySelfToSnapshot:(id)a0;

@end
