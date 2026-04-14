@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)unownedToStrongObjectsMapTable;
+ (id)alloc;
+ (id)weakToStrongObjectsMapTable;
+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (id)weakToWeakObjectsMapTable;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)strongToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithWeakToWeakObjects;

- (void)bs_each:(id /* block */)a0;
- (id)bs_filter:(id /* block */)a0;
- (id)bs_safeObjectForKey:(id)a0 ofType:(Class)a1;
- (void)bs_setSafeObject:(id)a0 forKey:(id)a1;
- (id)bs_takeObjectForKey:(id)a0;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (id)objectEnumerator;
- (id)objectForKey:(id)a0;
- (id)enumerator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)removeAllItems;
- (unsigned long long)__capacity;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)init;
- (id)keyEnumerator;
- (id)description;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)allKeys;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (void)setItem:(const void *)a0 forKey:(const void *)a1;
- (id)mutableDictionary;

@end
