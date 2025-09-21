@class NSString, QCPatch, QCStringPort, GFList;

@interface QCPatchRenderer : QCPatch {
    QCStringPort *inputPath;
    int _compositionMode;
    GFList *_compositionInputs;
    GFList *_compositionOutputs;
    char _hasTimebase;
    QCPatch *_compositionPatch;
    NSString *_compositionLocation;
    char _usingOpenglContext;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (unsigned long long)inputCount;
- (unsigned long long)outputCount;
- (char)setup:(id)a0;
- (int)_checkExecutionMode;
- (id)_outputAtIndex:(unsigned long long)a0;
- (void)enable:(id)a0;
- (char)_addInput:(Class)a0 forKey:(id)a1;
- (char)_addOutput:(Class)a0 forKey:(id)a1;
- (void)setHasTimebase:(char)a0;
- (void)updateTimebase:(int)a0;
- (id)_inputAtIndex:(unsigned long long)a0;
- (void)_invalidateDodForSubpatches;
- (void)_removeInputForKey:(id)a0;
- (void)_removeOutputForKey:(id)a0;
- (void)_setComposition:(id)a0 context:(id)a1;
- (void)autoconfigureWithPatch:(id)a0;
- (void)autoconfigureWithProtocol:(id)a0;
- (void)cleanup:(id)a0;
- (id)compositionInputs;
- (id)compositionOutputs;
- (void)disable:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (int)executionMode;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setCompositionInputs:(id)a0;
- (void)setCompositionOutputs:(id)a0;
- (void)setExecutionMode:(int)a0;

@end
