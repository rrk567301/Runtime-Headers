@interface __NSGenericDeallocHandler {
    Class isa;
    id /* block */ _block;
}

+ (void)initialize;

- (void)finalize;
- (unsigned long long)retainCount;
- (id)retain;
- (void)release;

@end
