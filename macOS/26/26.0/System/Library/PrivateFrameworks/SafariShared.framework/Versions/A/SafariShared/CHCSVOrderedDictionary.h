@class NSArray, NSDictionary;

@interface CHCSVOrderedDictionary : NSDictionary {
    NSArray *_keys;
    NSArray *_values;
    NSDictionary *_dictionary;
}

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)keyEnumerator;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)allValues;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;

@end
