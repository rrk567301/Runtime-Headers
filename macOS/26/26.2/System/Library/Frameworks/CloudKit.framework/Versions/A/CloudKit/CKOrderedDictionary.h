@class NSMutableArray;

@interface CKOrderedDictionary : NSObject {
    NSMutableArray *tuples;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)orderedDictionary;
+ (id)orderedDictionaryWithCapacity:(unsigned long long)a0;

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)dictionaryRepresentationRecursive:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;

@end
