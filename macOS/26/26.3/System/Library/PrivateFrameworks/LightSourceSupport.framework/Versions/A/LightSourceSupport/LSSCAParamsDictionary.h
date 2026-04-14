@interface LSSCAParamsDictionary : NSDictionary

@property (nonatomic) struct { float angle; float opacity; float spread; float height; } params;

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;

@end
