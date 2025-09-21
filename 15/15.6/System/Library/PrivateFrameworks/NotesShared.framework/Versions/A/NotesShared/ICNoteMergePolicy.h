@interface ICNoteMergePolicy : NSMergePolicy

- (id)init;
- (id)initWithMergeType:(unsigned long long)a0;
- (char)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (char)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;
- (void)resolveConflict:(id)a0 forWallClockMergeablesInObject:(id)a1;
- (char)resolveConflictingAttachment:(id)a0 with:(id)a1;
- (char)resolveConflictingAttachment:(id)a0 withInlineAttachment:(id)a1;
- (char)resolveConflictingAttachmentPreviewImage:(id)a0 with:(id)a1;
- (char)resolveConflictingDeviceMigrationState:(id)a0 with:(id)a1;
- (char)resolveConflictingFolder:(id)a0 with:(id)a1;
- (char)resolveConflictingInlineAttachment:(id)a0 with:(id)a1;
- (char)resolveConflictingLegacyTombstone:(id)a0 with:(id)a1;
- (char)resolveConflictingNote:(id)a0 with:(id)a1;
- (char)resolveConstraintConflict:(id)a0;

@end
