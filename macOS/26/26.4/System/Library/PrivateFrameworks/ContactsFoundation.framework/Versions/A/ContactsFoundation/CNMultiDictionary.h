@class NSArray, NSDictionary, NSMutableDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_entries;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)multiDictionary;
+ (id)multiDictionaryWithEntries:(id)a0;
+ (id)multiDictionaryWithObject:(id)a0 forKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectsForKeys:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithEntries:(id)a0;
- (id)init;
- (BOOL)containsKey:(id)a0;
- (id)description;
- (id)objectsForKey:(id)a0;
- (void)eachObject:(id /* block */)a0;

@end
