@class NSString;

@interface PIParallaxStyleBindingParameter : PIParallaxStyleParameter

@property (readonly, copy, nonatomic) NSString *variableName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithVariableName:(id)a0;
- (char)isEqualToParallaxStyleParameter:(id)a0;

@end
