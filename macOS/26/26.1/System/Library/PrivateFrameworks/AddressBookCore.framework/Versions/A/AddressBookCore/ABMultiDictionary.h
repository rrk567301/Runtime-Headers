@class NSMutableDictionary;

@interface ABMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_entries;
}

+ (id)multiDictionary;
+ (id)multiDictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)emptyDictionary;

- (id)objectsForKeys:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithEntries:(id)a0;
- (BOOL)containsKey:(id)a0;
- (id)allKeys;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)objectsForKey:(id)a0;
- (void)eachObject:(id /* block */)a0;

@end
