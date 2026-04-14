@class AFBBufferBuilder;

@interface TRIFBFastFactorLevelsBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct FastFactorLevelsBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setNamespaceName:(id)a0;
- (id)init;
- (void)setLevels:(id)a0;
- (void)setNcvs:(id)a0;
- (void)setSourceWithDefaults:(id)a0;
- (void)setSourceWithFactorPackId:(id)a0;
- (void)setSourceWithTreatmentId:(id)a0;

@end
