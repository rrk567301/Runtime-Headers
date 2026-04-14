@interface __NSGenericDeallocHandler {
    Class isa;
    id /* block */ _block;
}

+ (void)initialize;

- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;

@end
