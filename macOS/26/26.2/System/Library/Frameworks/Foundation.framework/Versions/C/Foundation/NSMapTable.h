@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)unownedToStrongObjectsMapTable;
+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (id)strongToWeakObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)weakToWeakObjectsMapTable;
+ (id)weakToStrongObjectsMapTable;
+ (id)alloc;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithWeakToWeakObjects;

- (void)bs_each:(id /* block */)a0;
- (id)bs_filter:(id /* block */)a0;
- (id)bs_safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)bs_setSafeObject:(id)a0 forKey:(id)a1;
- (id)bs_takeObjectForKey:(id)a0;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)objectEnumerator;
- (id)initWithCoder:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)enumerator;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllItems;
- (id)allKeys;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)__capacity;
- (id)copy;
- (id)description;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (id)init;
- (id)keyEnumerator;
- (id)dictionaryRepresentation;
- (void)removeAllObjects;
- (void)setItem:(const void *)a0 forKey:(const void *)a1;
- (id)mutableDictionary;

@end
