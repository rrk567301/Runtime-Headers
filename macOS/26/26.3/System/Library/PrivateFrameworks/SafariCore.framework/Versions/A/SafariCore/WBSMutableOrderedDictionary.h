@class NSArray, WBSMutableOrderedSet, NSMutableDictionary;

@interface WBSMutableOrderedDictionary : NSObject {
    WBSMutableOrderedSet *_mutableOrderedSetOfKeys;
    NSMutableDictionary *_mutableDictionary;
    unsigned long long _maximumCount;
}

@property (readonly, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) NSArray *orderedValues;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithMaximumCount:(unsigned long long)a0;

@end
