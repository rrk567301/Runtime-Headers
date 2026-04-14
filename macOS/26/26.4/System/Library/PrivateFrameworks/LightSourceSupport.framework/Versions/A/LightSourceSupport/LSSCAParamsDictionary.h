@interface LSSCAParamsDictionary : NSDictionary

@property (nonatomic) struct { float angle; float opacity; float spread; float height; } params;

- (id)objectForKey:(id)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (unsigned long long)count;
- (id)keyEnumerator;

@end
