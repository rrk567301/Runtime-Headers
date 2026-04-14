@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying> {
    NSHashTable *_hashTable;
    BOOL _hasZeroValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)containsValue:(long long)a0;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)enumerateSortedWithBlock:(id /* block */)a0;

@end
