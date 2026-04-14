@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable *_mapTable;
    id _zeroIndexValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(long long)a0;
- (void).cxx_destruct;
- (id)allKeys;
- (id)allValues;
- (BOOL)containsObjectForKey:(long long)a0;
- (void)enumerateKeysWithBlock:(id /* block */)a0;
- (void)enumerateWithBlock:(id /* block */)a0;

@end
