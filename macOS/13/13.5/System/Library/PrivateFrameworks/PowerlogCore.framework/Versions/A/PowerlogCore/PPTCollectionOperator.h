@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PPTCollectionOperator : PLOperator

@property (retain) PLXPCListenerOperatorComposition *metricListener;
@property (retain) PLXPCResponderOperatorComposition *allowlistResponder;

- (id)init;
- (void).cxx_destruct;
- (void)startCollection;
- (void)initOperatorDependancies;

@end
