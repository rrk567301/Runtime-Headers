@class QCBooleanPort, QCImagePort, CIFilter, GFList;

@interface QCImageFilter : QCPatch {
    QCImagePort *outputImage;
    char _normalizeCoordinates;
    unsigned long long _filterVersion;
    CIFilter *_ciFilter;
    GFList *_paramList;
    QCBooleanPort *_bypassPort;
    QCImagePort *_imagePort;
    char _rerun;
    unsigned int _target;
    unsigned long long _mipmapLevels;
}

+ (void)initialize;
+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)attributesWithIdentifier:(id)a0;
+ (char)isCIFilterCompatible:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)setNormalizeCoordinates:(char)a0;
- (char)setup:(id)a0;
- (id)_baseKey;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (id)_inputPortAttributesWithKey:(id)a0 index:(unsigned long long)a1 count:(unsigned long long)a2 type:(id)a3;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (char)hasBypass;
- (void)setHasBypass:(char)a0;

@end
