@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {
    MPSMatrix *singleGateZ;
    char _isTemporary;
}

- (void)dealloc;
- (void)setReadCount:(unsigned long long)a0;
- (char)isTemporary;
- (id)initForSingleGateWithCommandBuffer:(id)a0 matrixDescriptor:(id)a1 isTemporary:(char)a2;

@end
