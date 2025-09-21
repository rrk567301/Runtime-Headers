@class NSString;

@interface ICTTMergeableStringSelection : NSObject <ICTTMergeableStringIDTracker> {
    struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> { void *__begin_; void *__end_; void *__cap_; } _selectionRanges;
}

@property (readonly, nonatomic) struct TopoID { id x0; unsigned int x1; } minTopoID;
@property (nonatomic) unsigned long long selectionAffinity;
@property (readonly, nonatomic) ICTTMergeableStringSelection *locationOnlySelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)selectionRanges;
- (id)initWithData:(id)a0;
- (long long)compare:(id)a0;
- (id)serialize;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;
- (void)saveToArchive:(void *)a0;

@end
