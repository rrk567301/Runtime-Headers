@interface GKTerraceNoiseModifier : GKNoiseModifier {
    double *_controlPoints;
    int _count;
    char _inverted;
}

- (void)dealloc;
- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (id)initWithPeakInputValues:(id)a0 terracesInverted:(char)a1;
- (int)requiredInputModuleCount;

@end
