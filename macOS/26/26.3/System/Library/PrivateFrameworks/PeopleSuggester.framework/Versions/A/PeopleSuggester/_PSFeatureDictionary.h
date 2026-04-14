@class NSMutableDictionary;

@interface _PSFeatureDictionary : NSMutableDictionary {
    NSMutableDictionary *_timeBuckets;
    NSMutableDictionary *_unoptimizedValues;
    unsigned long long _count;
}

- (unsigned long long)count;
- (void)addEntriesFromDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0 overwrite:(BOOL)a1;
- (void)addFeatureWithIntValue:(id)a0 doubleValue:(id)a1 stringValue:(id)a2 boolValue:(id)a3 timeBucket:(int)a4 forKey:(id)a5;

@end
