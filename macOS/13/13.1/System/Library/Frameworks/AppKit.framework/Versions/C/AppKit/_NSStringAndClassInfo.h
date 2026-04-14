@class NSString;

@interface _NSStringAndClassInfo : NSObject <NSCopying> {
    NSString *_registryString;
    Class _objectClass;
    unsigned long long _hash;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObjectClass:(Class)a0;
- (id)initWithRegistryString:(id)a0 andObjectClass:(Class)a1;
- (void)setRegistryString:(id)a0;

@end
