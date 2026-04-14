@class NSString;

@interface PIParallaxStyleBindingParameter : PIParallaxStyleParameter

@property (readonly, copy, nonatomic) NSString *variableName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)initWithVariableName:(id)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
