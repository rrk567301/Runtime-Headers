@class NSMutableArray;

@interface CKOrderedDictionary : NSObject {
    NSMutableArray *tuples;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)orderedDictionaryWithCapacity:(unsigned long long)a0;
+ (id)orderedDictionary;

- (id)initWithCapacity:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentationRecursive:(BOOL)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
