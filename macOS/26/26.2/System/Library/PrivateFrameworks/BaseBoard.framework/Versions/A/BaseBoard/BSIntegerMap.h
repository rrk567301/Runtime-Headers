@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable *_mapTable;
    id _zeroIndexValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsObjectForKey:(long long)a0;
- (id)objectForKey:(long long)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)enumerateKeysWithBlock:(id /* block */)a0;

@end
