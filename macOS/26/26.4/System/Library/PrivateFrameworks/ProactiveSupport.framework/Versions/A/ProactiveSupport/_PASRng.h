@interface _PASRng : NSObject {
    struct { unsigned long long s[2]; } _state;
}

- (unsigned long long)next;
- (float)nextFloat;
- (id)init;
- (double)nextDouble;
- (id)initWithSeed:(unsigned long long)a0;

@end
