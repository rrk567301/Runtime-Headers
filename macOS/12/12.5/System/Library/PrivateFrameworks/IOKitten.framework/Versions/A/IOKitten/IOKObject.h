@class NSString;

@interface IOKObject : NSObject

@property (readonly, copy, nonatomic) NSString *ioClassName;
@property (readonly, nonatomic) unsigned int object;

+ (Class)classForRegistryEntry:(unsigned int)a0;
+ (id)ioSuperClassNameForClassName:(id)a0;
+ (id)bundleIdentifierForClassName:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)conformsToIOClassName:(id)a0;
- (id)initWithIOObject:(unsigned int)a0;

@end
