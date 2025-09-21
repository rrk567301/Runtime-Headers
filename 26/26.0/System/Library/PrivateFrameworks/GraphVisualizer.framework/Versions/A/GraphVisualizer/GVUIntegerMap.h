@class NSArray, NSMapTable;

@interface GVUIntegerMap : NSObject {
    NSMapTable *_map;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly) unsigned long long count;

- (void)setInteger:(unsigned long long)a0 forKey:(id)a1;
- (unsigned long long)integerForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)decrementValueForKey:(id)a0;
- (unsigned long long)incrementValueForKey:(id)a0;
- (void)setZeroForKey:(id)a0;

@end
