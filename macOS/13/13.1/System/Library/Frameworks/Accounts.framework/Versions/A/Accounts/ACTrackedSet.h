@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)set;
+ (id)setWithArray:(id)a0;
+ (id)setWithSet:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)allObjects;
- (id)initWithArray:(id)a0;
- (id)member:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)initWithSet:(id)a0;
- (id)anyObject;
- (id)_initWithUnderlyingSet:(id)a0 changesDictionary:(id)a1;
- (id)_initWithEnumerable:(id)a0 count:(unsigned long long)a1;
- (id)allModifications;
- (BOOL)isEqualToTrackedSet:(id)a0;
- (void)enumerateModificationsUsingBlock:(id /* block */)a0;
- (void)enumerateModificationsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
