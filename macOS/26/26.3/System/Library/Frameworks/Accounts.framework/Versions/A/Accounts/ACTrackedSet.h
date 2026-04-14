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

- (id)anyObject;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)enumerateModificationsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)member:(id)a0;
- (id)initWithArray:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (void)enumerateModificationsUsingBlock:(id /* block */)a0;
- (id)initWithSet:(id)a0;
- (id)allObjects;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_initWithUnderlyingSet:(id)a0 changesDictionary:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqualToTrackedSet:(id)a0;
- (id)objectEnumerator;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allModifications;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithEnumerable:(id)a0 count:(unsigned long long)a1;

@end
