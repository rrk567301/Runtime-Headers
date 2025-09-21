@class QCNumberPort;

@interface QCRandom : QCPatch {
    QCNumberPort *inputMin;
    QCNumberPort *inputMax;
    QCNumberPort *outputValue;
    double _variability;
    char _usePerlinNoise;
    double _lastTime;
    double _lastSampleTime;
    char *_perm;
    double *_grad;
    long long _seed;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)validateValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (char)setup:(id)a0;
- (double)_noise2d:(double)a0 y:(double)a1 min:(double)a2 max:(double)a3;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
