@class NSString, NSMutableDictionary;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {
    NSMutableDictionary *_animationPaths;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *operation;

+ (BOOL)supportsSecureCoding;
+ (id)animationPath;

- (void)cleanup;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)animationPathForKey:(id)a0;
- (id)animationPaths;
- (void)copyAnimationPaths:(id)a0;
- (void)removeAnimationPathForKey:(id)a0;
- (void)setAnimationPath:(id)a0;
- (void)setAnimationPath:(id)a0 forKey:(id)a1;

@end
