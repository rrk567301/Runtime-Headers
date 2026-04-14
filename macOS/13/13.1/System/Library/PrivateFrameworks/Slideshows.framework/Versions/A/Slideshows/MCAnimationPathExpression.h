@class NSString;

@interface MCAnimationPathExpression : MCAnimationPath

@property (copy) NSString *expression;

+ (id)animationPathWithKey:(id)a0 andExpression:(id)a1;

- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;

@end
