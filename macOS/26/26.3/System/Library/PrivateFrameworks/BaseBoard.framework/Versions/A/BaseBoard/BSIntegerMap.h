@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable *_mapTable;
    id _zeroIndexValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (BOOL)containsObjectForKey:(long long)a0;
- (id)allKeys;
- (id)objectForKey:(long long)a0;
- (id)description;
- (id)init;
- (id)allValues;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)enumerateKeysWithBlock:(id /* block */)a0;

@end
