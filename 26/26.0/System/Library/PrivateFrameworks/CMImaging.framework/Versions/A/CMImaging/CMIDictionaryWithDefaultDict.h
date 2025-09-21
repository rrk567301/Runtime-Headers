@class NSDictionary;

@interface CMIDictionaryWithDefaultDict : NSDictionary {
    unsigned long long _count;
    BOOL _countEvaluated;
}

@property (readonly) NSDictionary *mainDict;
@property (readonly) NSDictionary *defaultDict;

- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)initWithMainDict:(id)a0 defaultDict:(id)a1;

@end
