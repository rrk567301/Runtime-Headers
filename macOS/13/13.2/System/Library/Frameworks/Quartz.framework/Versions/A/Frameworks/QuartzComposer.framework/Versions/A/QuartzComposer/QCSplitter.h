@class NSMutableArray, QCPort;

@interface QCSplitter : QCPatch {
    QCPort *_inPort;
    QCPort *_outPort;
    double _min;
    double _max;
    BOOL _useLabels;
    NSMutableArray *_indexLabels;
}

+ (BOOL)isSafe;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (BOOL)setState:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)nodeActorForView:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)_forwardRenderingFlag;
- (void)_configurePort;
- (void)setPortClass:(Class)a0;
- (Class)portClass;
- (double)portMinValue;
- (void)setPortMinValue:(double)a0;
- (double)portMaxValue;
- (void)setPortMaxValue:(double)a0;
- (void)_updateMaxIndexFromLabels;
- (unsigned long long)indexLabelsCount;
- (void)setUsesIndexLabels:(BOOL)a0;
- (BOOL)usesIndexLabels;
- (void)addIndexLabel;
- (void)removeIndexLabelAtIndex:(unsigned long long)a0;
- (void)setIndexLabel:(id)a0 atIndex:(unsigned long long)a1;
- (id)indexLabelAtIndex:(unsigned long long)a0;

@end
