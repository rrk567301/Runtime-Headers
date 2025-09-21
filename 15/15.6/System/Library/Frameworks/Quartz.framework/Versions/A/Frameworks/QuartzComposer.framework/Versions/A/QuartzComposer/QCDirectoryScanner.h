@class QCBooleanPort, QCStructurePort, QCStringPort;

@interface QCDirectoryScanner : QCThreadPatch {
    QCStringPort *inputPath;
    QCBooleanPort *inputSignal;
    QCStructurePort *outputFiles;
    QCBooleanPort *outputSignal;
    int _fileMode;
    char _recursive;
    char _keylessStructures;
    char _lastSignal;
    char _rerun;
}

+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (char)canInstantiateWithFile:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)instantiateWithFile:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)setFileMode:(int)a0;
- (char)setup:(id)a0;
- (void)_folderThread:(id)a0;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (int)fileMode;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (char)recursive;
- (void)setRecursive:(char)a0;

@end
