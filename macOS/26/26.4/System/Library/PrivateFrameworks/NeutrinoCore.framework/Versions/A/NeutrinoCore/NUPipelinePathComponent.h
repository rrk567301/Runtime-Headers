@class NSString;

@interface NUPipelinePathComponent : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)componentsFromString:(id)a0;
+ (id)componentWithName:(id)a0;
+ (id)currentComponent;
+ (id)rootComponent;
+ (id)stringWithComponents:(id)a0;
+ (id)superComponent;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithType:(long long)a0 name:(id)a1;
- (BOOL)isEqualToPathComponent:(id)a0;

@end
