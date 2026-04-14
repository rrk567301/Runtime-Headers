@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery

@property (retain, setter=_setIndexableContent:) CHRecognitionSessionIndexableContent *indexableContent;

- (void).cxx_destruct;
- (id)debugName;
- (void)q_updateQueryResult;
- (id)initWithRecognitionSession:(id)a0;

@end
