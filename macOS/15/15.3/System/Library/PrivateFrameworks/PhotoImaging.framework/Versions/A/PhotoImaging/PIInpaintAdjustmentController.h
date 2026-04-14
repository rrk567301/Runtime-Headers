@interface PIInpaintAdjustmentController : PIAdjustmentController

- (unsigned long long)operationCount;
- (id)visualInputKeys;
- (BOOL)_maskArray:(id)a0 hasSourceWithIdentifier:(id)a1;
- (void)appendOperation:(id)a0;
- (BOOL)appendRemovalOperationWithMasks:(id)a0 exclusionMasks:(id)a1 options:(unsigned long long)a2 error:(out id *)a3;
- (void)appendStroke:(id)a0 exclusionMasks:(id)a1 options:(unsigned long long)a2;
- (void)initializeAdjustment;
- (void)takeNewOperationsFromComposition:(id)a0 redactNewOperations:(BOOL)a1;

@end
