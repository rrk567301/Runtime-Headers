@interface GKCurveNoiseModifier : GKNoiseModifier {
    double *_parameters;
    double *_controlPoints;
    int _count;
}

- (id)init;
- (void)dealloc;
- (double)valueAt:(SEL)a0;
- (id)initWithControlPoints:(id)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (int)requiredInputModuleCount;

@end
