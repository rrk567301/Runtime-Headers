@class NSSet, NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
    NSMutableDictionary *mAttributes;
    NSMutableSet *mAnimationPaths;
}

@property (readonly) NSSet *animationPaths;
@property (readonly) unsigned long long countOfAnimationPaths;
@property (copy) NSString *filterID;
@property (copy) NSDictionary *attributes;
@property (nonatomic) unsigned long long index;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)attributeForKey:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)xmlElement;
- (id)imprint;
- (id)animationPathForKey:(id)a0;
- (void)removeAnimationPathForKey:(id)a0;
- (void)addAnimationPath:(id)a0;
- (void)removeAllAnimationPaths;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;
- (void)initAnimationPathsWithImprints:(id)a0;
- (void)demolishAnimationPaths;
- (id)imprintsForAnimationPaths;
- (void)addAnimationPathsToXMLElement:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;

@end
