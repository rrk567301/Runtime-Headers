@class QCPort, QCStringPort;

@interface QCCore3DLoader : QCPatch {
    char _allMeshes;
    char _normalize;
    QCStringPort *inputPath;
    QCPort *_outputPort;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (char)canInstantiateWithFile:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)instantiateWithFile:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)setNormalize:(char)a0;
- (char)setup:(id)a0;
- (void)_setMeshTransformation:(id)a0;
- (char)_updateMesh;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setAllMeshes:(char)a0;
- (void)setMeshPath:(id)a0;

@end
