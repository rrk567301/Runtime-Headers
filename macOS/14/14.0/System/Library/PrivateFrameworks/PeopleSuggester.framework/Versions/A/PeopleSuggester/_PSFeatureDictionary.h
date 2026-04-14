@class NSMutableDictionary;

@interface _PSFeatureDictionary : NSMutableDictionary {
    NSMutableDictionary *_timeBuckets;
    NSMutableDictionary *_otherValues;
    unsigned long long _count;
}

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
