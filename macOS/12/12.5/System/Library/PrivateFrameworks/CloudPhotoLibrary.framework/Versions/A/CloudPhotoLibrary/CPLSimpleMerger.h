@interface CPLSimpleMerger : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (BOOL)mergeConflictsWithError:(id *)a0;
- (id)initWithMergeBlock:(id /* block */)a0;

@end
