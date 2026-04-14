@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying> {
    NSHashTable *_hashTable;
    BOOL _hasZeroValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)containsValue:(long long)a0;
- (void)enumerateSortedWithBlock:(id /* block */)a0;

@end
