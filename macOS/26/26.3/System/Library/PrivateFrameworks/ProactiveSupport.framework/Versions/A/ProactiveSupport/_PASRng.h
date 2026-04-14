@interface _PASRng : NSObject {
    struct { unsigned long long s[2]; } _state;
}

- (id)initWithSeed:(unsigned long long)a0;
- (id)init;
- (unsigned long long)next;
- (double)nextDouble;
- (float)nextFloat;

@end
