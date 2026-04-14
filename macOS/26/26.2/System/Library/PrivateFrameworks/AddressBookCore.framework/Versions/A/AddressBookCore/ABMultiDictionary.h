@class NSMutableDictionary;

@interface ABMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_entries;
}

+ (id)multiDictionary;
+ (id)multiDictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)emptyDictionary;

- (id)objectsForKeys:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)initWithEntries:(id)a0;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)objectsForKey:(id)a0;
- (void)eachObject:(id /* block */)a0;

@end
