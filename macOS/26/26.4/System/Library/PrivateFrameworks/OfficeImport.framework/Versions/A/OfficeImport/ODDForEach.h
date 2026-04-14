@class ODDIteratorSpecification;

@interface ODDForEach : ODDLayoutObjectList {
    ODDIteratorSpecification *mIteratorSpecification;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)iteratorSpecification;

@end
