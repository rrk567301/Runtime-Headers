@interface CCSetIntegrityCheck : NSObject

- (id)checkRunMarkerCorruptionInDatabase:(id)a0 set:(id)a1 error:(id *)a2;
- (id)checkSequenceGapsAndOverlapsInDatabase:(id)a0 set:(id)a1 error:(id *)a2;
- (id)descriptionForSet:(id)a0;
- (id)performIntegrityCheckOnSets:(id)a0 error:(id *)a1;

@end
