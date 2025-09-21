@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)set;
+ (id)setWithArray:(id)a0;
+ (id)setWithSet:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)containsObject:(id)a0;
- (id)member:(id)a0;
- (id)allObjects;
- (id)anyObject;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithSet:(id)a0;
- (id)objectEnumerator;
- (id)_initWithEnumerable:(id)a0 count:(unsigned long long)a1;
- (id)_initWithUnderlyingSet:(id)a0 changesDictionary:(id)a1;
- (id)allModifications;
- (void)enumerateModificationsUsingBlock:(id /* block */)a0;
- (void)enumerateModificationsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (char)isEqualToTrackedSet:(id)a0;

@end
