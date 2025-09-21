@interface _LSSCAParamsDictionary : NSDictionary

@property (nonatomic) struct { float angle; float opacity; float spread; float height; } params;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;

@end
