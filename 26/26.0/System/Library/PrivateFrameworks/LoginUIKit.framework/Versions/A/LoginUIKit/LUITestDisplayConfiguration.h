@interface LUITestDisplayConfiguration : NSObject

@property (readonly) BOOL isMainDisplay;
@property (readonly) long long tag;
@property (readonly) double width;
@property (readonly) double height;

+ (id)displayConfigurationForMainDisplay;
+ (id)displayConfigurationWithWidth:(double)a0 andHeight:(double)a1;

- (id)init;
- (id)description;
- (id)initWithWidth:(double)a0 andHeight:(double)a1;

@end
