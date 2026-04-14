@interface RKMontrealModel : NSObject

@property (readonly, nonatomic) void *model;

+ (id)modelForLanguage:(id)a0;
+ (id)pathForLanguage:(id)a0;

- (void)reset;
- (id)initWithPath:(id)a0;
- (void)dealloc;

@end
