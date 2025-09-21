@interface CPLSimpleMerger : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithMergeBlock:(id /* block */)a0;
- (char)mergeConflictsWithError:(id *)a0;

@end
