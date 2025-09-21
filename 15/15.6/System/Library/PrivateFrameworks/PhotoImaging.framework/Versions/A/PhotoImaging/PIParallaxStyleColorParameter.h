@class NSNumber;

@interface PIParallaxStyleColorParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSNumber *redValue;
@property (readonly, nonatomic) NSNumber *greenValue;
@property (readonly, nonatomic) NSNumber *blueValue;
@property (readonly, nonatomic) NSNumber *alphaValue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)initWithRed:(id)a0 green:(id)a1 blue:(id)a2 alpha:(id)a3;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (char)isEqualToParallaxStyleParameter:(id)a0;

@end
