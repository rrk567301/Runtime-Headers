@interface CNAtomicUnsignedIntegerGenerator : NSObject {
    _Atomic long long _n;
}

- (id)description;
- (unsigned long long)nextUnsignedInteger;
- (id)init;

@end
