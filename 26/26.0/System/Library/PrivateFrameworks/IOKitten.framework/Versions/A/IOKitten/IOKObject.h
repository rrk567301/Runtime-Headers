@class NSString;

@interface IOKObject : NSObject

@property (readonly, copy, nonatomic) NSString *ioClassName;
@property (readonly, nonatomic) unsigned int object;

+ (Class)classForRegistryEntry:(unsigned int)a0;
+ (id)bundleIdentifierForClassName:(id)a0;
+ (id)ioSuperClassNameForClassName:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)conformsToIOClassName:(id)a0;
- (id)initWithIOObject:(unsigned int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
