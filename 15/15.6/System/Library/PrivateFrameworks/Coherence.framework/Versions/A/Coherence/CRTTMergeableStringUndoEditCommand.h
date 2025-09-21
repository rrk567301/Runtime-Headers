@class CRContext;

@interface CRTTMergeableStringUndoEditCommand : NSObject

@property (readonly, nonatomic) void *deleteRanges;
@property (readonly, nonatomic) void *insertStrings;
@property (weak, nonatomic) CRContext *context;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (char)applyToString:(id)a0;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (char)_applyToString:(id)a0;
- (char)hasTemporaryIDs;
- (id)renamedWith:(id)a0;
- (void)retainTemporaryIDs;
- (id)temporaryIDs;

@end
