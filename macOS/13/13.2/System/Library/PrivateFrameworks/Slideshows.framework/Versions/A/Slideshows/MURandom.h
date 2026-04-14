@interface MURandom : MUPoolObject {
    long long _state[31];
    long long *_frontPtr;
    long long *_rearPtr;
    long long *_endPtr;
}

+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;
+ (BOOL)clearVars;
+ (id)randomGeneratorWithSeed:(unsigned long long)a0;

- (void)_seed:(unsigned long long)a0;
- (long long)randomInt;
- (double)randomFloatInRange:(double)a0 :(double)a1;

@end
