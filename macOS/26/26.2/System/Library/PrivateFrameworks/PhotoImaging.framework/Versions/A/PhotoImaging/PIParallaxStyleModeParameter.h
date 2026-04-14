@class NSString;

@interface PIParallaxStyleModeParameter : PIParallaxStyleParameter

@property (readonly, copy, nonatomic) NSString *modeValue;

- (id)initWithMode:(id)a0;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
