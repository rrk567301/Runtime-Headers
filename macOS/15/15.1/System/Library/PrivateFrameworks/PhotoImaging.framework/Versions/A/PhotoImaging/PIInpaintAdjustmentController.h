@class NSArray;

@interface PIInpaintAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *detectedFaces;

- (unsigned long long)operationCount;
- (id)visualInputKeys;
- (BOOL)_maskArray:(id)a0 hasSourceWithIdentifier:(id)a1;
- (BOOL)adjustmentContainsDeclutter;
- (void)appendOperation:(id)a0;
- (BOOL)appendRemovalOperationWithMasks:(id)a0 exclusionMasks:(id)a1 options:(unsigned long long)a2 error:(out id *)a3;
- (void)appendStroke:(id)a0 exclusionMasks:(id)a1 options:(unsigned long long)a2;
- (void)takeNewOperationsFromComposition:(id)a0 redactNewOperations:(BOOL)a1;

@end
