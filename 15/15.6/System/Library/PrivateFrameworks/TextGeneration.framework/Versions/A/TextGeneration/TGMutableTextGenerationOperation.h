@class TGTextGenerationOutputConstraint;

@interface TGMutableTextGenerationOperation : TGTextGenerationOperation

@property (copy) TGTextGenerationOutputConstraint *outputConstraint;
@property (getter=shouldProduceOutputStream) char produceOutputStream;


@end
