@class NSString;

@interface IOKObject : NSObject

@property (readonly, copy, nonatomic) NSString *ioClassName;
@property (readonly, nonatomic) unsigned int object;

+ (id)bundleIdentifierForClassName:(id)a0;
+ (Class)classForRegistryEntry:(unsigned int)a0;
+ (id)ioSuperClassNameForClassName:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)conformsToIOClassName:(id)a0;
- (id)initWithIOObject:(unsigned int)a0;

@end
