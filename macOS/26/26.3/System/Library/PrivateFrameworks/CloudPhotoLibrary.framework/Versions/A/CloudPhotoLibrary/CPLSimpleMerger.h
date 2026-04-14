@interface CPLSimpleMerger : NSObject {
    id /* block */ _block;
}

- (BOOL)mergeConflictsWithError:(id *)a0;
- (id)initWithMergeBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
