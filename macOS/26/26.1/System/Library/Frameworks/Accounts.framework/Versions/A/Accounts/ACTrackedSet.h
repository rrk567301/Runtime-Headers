@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)setWithArray:(id)a0;
+ (id)set;
+ (id)setWithSet:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)member:(id)a0;
- (id)allObjects;
- (unsigned long long)hash;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)allModifications;
- (BOOL)isEqualToTrackedSet:(id)a0;
- (id)objectEnumerator;
- (id)_initWithUnderlyingSet:(id)a0 changesDictionary:(id)a1;
- (BOOL)containsObject:(id)a0;
- (void)enumerateModificationsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)description;
- (id)initWithSet:(id)a0;
- (id)anyObject;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)enumerateModificationsUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_initWithEnumerable:(id)a0 count:(unsigned long long)a1;
- (id)init;

@end
