@interface __NSGenericDeallocHandler {
    Class isa;
    id /* block */ _block;
}

+ (void)initialize;

- (void)finalize;
- (id)retain;
- (void)release;
- (unsigned long long)retainCount;

@end
