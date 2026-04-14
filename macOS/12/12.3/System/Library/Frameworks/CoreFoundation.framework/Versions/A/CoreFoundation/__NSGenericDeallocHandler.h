@interface __NSGenericDeallocHandler {
    Class isa;
    id /* block */ _block;
}

+ (void)initialize;

- (id)retain;
- (void)release;
- (unsigned long long)retainCount;
- (void)finalize;

@end
