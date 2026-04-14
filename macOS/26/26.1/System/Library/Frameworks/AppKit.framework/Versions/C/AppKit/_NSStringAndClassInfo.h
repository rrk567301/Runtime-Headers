@class NSString;

@interface _NSStringAndClassInfo : NSObject <NSCopying> {
    NSString *_registryString;
    Class _objectClass;
    unsigned long long _hash;
}

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setObjectClass:(Class)a0;
- (id)initWithRegistryString:(id)a0 andObjectClass:(Class)a1;
- (void)setRegistryString:(id)a0;

@end
