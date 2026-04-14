@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery

@property (retain, setter=_setIndexableContent:) CHRecognitionSessionIndexableContent *indexableContent;

- (void).cxx_destruct;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
