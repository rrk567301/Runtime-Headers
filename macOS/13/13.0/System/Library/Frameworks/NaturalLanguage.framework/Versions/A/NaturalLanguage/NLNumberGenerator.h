@interface NLNumberGenerator : NSObject {
    unsigned long long state[2];
}

- (id)init;
- (void)reset;
- (void)resetWithSeed:(unsigned long long)a0;
- (unsigned long long)numberInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
