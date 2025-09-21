@interface _TtC9Coherence28CRTTMergeableStringSelection : NSObject {
    struct vector<std::pair<Coherence_namespace::TopoID, Coherence_namespace::TopoID>, std::allocator<std::pair<Coherence_namespace::TopoID, Coherence_namespace::TopoID>>> { void *__begin_; void *__end_; void *__cap_; } _selectionRanges;
}

@property (nonatomic) unsigned long long selectionAffinity;

- (void *)selectionRanges;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;

@end
