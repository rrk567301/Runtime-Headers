@class NSString, NSArray;

@interface PIParallaxStyleFilterStackDefinition : PIParallaxStyleDefinition

@property (readonly, copy, nonatomic) NSString *stackName;
@property (readonly, copy, nonatomic) NSArray *filters;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithStackName:(id)a0 filters:(id)a1;
- (char)isEqualToParallaxStyleDefinition:(id)a0;
- (char)isEqualToParallaxStyleFilterStackDefinition:(id)a0;

@end
