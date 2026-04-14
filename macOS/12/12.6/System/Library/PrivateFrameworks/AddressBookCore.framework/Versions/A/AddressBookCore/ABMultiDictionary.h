@class NSMutableDictionary;

@interface ABMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_entries;
}

+ (id)multiDictionary;
+ (id)multiDictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)emptyDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsKey:(id)a0;
- (id)allKeys;
- (id)objectsForKeys:(id)a0;
- (id)dictionaryRepresentation;
- (id)objectsForKey:(id)a0;
- (id)initWithEntries:(id)a0;
- (void)eachObject:(id /* block */)a0;

@end
