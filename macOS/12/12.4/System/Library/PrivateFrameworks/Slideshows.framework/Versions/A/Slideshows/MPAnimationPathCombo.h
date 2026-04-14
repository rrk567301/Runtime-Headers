@class NSString, NSMutableDictionary;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {
    NSMutableDictionary *_animationPaths;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *operation;

+ (BOOL)supportsSecureCoding;
+ (id)animationPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cleanup;
- (id)animationPathForKey:(id)a0;
- (void)removeAnimationPathForKey:(id)a0;
- (id)animationPaths;
- (void)copyAnimationPaths:(id)a0;
- (void)setAnimationPath:(id)a0 forKey:(id)a1;
- (void)setAnimationPath:(id)a0;

@end
