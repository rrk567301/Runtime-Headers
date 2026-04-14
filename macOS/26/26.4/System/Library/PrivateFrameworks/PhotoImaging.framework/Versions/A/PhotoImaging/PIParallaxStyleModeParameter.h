@class NSString;

@interface PIParallaxStyleModeParameter : PIParallaxStyleParameter

@property (readonly, copy, nonatomic) NSString *modeValue;

- (void).cxx_destruct;
- (id)type;
- (id)init;
- (id)description;
- (id)initWithMode:(id)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
