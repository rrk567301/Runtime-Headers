@class NSUUID, CRContext;

@interface CRTTMergeableStringIndex : NSObject

@property (readonly, nonatomic) CRContext *context;
@property (readonly, nonatomic) unsigned long long affinity;
@property (readonly, nonatomic) struct TopoID { struct TopoReplica { NSUUID *uuid; unsigned int index; } replica; unsigned int clock; } index;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_objCRenameSequence;
- (id)initWithContext:(id)a0 topoID:(struct TopoID { struct TopoReplica { id x0; unsigned int x1; } x0; unsigned int x1; })a1 affinity:(unsigned long long)a2;

@end
