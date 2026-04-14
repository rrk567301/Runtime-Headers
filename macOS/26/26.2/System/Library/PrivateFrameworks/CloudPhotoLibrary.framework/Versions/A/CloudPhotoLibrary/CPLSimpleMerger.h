@interface CPLSimpleMerger : NSObject {
    id /* block */ _block;
}

- (id)initWithMergeBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)mergeConflictsWithError:(id *)a0;

@end
