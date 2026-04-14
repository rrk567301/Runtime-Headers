@class NSMutableDictionary;

@interface ABMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_entries;
}

+ (id)multiDictionary;
+ (id)multiDictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)emptyDictionary;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (BOOL)containsKey:(id)a0;
- (id)objectsForKeys:(id)a0;
- (id)dictionaryRepresentation;
- (id)objectsForKey:(id)a0;
- (id)initWithEntries:(id)a0;
- (void)eachObject:(id /* block */)a0;

@end
