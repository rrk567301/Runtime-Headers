@class NSArray;

@interface SKAnimate : SKAction {
    void *_mycaction;
    NSArray *_textures;
}

@property (nonatomic) double timePerFrame;

+ (char)supportsSecureCoding;
+ (id)animateWithNormalTextures:(id)a0 timePerFrame:(double)a1 resize:(char)a2 restore:(char)a3;
+ (id)animateWithTextures:(id)a0 timePerFrame:(double)a1 resize:(char)a2 restore:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDuration:(double)a0;
- (id)reversedAction;

@end
