@class PMLSparseVector, SGModelSource;

@interface SGModelFeatures : NSObject {
    SGModelSource *_source;
    PMLSparseVector *_vector;
}

- (void).cxx_destruct;
- (id)source;
- (id)initWithSource:(id)a0 vector:(id)a1;
- (id)vector;
- (id)sessionDescriptor;

@end
