@interface CPLDropAllRecordsExtractionStep : CPLBatchExtractionStep

- (void)reset;
- (id)shortDescription;
- (char)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (char)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
