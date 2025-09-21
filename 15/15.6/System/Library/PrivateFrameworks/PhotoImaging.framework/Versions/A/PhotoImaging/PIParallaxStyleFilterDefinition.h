@class NSString, NSDictionary;

@interface PIParallaxStyleFilterDefinition : PIParallaxStyleDefinition

@property (readonly, copy, nonatomic) NSString *filterName;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithFilterName:(id)a0 parameters:(id)a1;
- (char)isEqualToParallaxStyleDefinition:(id)a0;
- (char)isEqualToParallaxStyleFilterDefinition:(id)a0;

@end
