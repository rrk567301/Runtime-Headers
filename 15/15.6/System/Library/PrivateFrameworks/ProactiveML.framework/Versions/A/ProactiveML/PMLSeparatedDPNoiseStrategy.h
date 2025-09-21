@class NSString;

@interface PMLSeparatedDPNoiseStrategy : NSObject <PMLNoiseStrategy> {
    const char *_pflIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getPFLIdentifier:(id)a0;

- (id)init;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (void)addNoiseToSparseMatrix:(id)a0;
- (void)addNoiseToSparseVector:(id)a0;
- (id)initWithPFLIdentifier:(const char *)a0;
- (char)scaleAndAddNoiseToDenseVector:(id)a0 usingNorm:(char)a1 scaleFactor:(float *)a2;

@end
