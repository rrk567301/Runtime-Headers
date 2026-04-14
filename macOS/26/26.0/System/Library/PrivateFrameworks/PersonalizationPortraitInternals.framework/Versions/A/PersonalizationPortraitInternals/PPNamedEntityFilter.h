@class MLModel;

@interface PPNamedEntityFilter : NSObject {
    MLModel *_model;
}

- (id)init;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)filterNamedEntityRecords:(id)a0;
- (id)filterScoredNamedEntities:(id)a0;
- (BOOL)isAcceptableRecord:(id)a0;

@end
