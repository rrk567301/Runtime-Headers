@class NSDictionary;

@interface WLKSortedKeyDictionary : NSDictionary

@property (copy, nonatomic) NSDictionary *underlyingDictionary;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;

@end
