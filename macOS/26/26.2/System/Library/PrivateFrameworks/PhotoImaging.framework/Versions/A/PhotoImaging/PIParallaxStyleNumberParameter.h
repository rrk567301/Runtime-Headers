@class NSNumber, NSString;

@interface PIParallaxStyleNumberParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) NSString *unit;

- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNumber:(id)a0;
- (id)init;
- (id)initWithNumber:(id)a0 unit:(id)a1;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
