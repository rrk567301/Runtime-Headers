@class NSString;

@interface PIParallaxStyleDefinition : NSObject

@property (readonly, nonatomic) NSString *type;

- (char)isEqual:(id)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (char)isEqualToParallaxStyleDefinition:(id)a0;

@end
