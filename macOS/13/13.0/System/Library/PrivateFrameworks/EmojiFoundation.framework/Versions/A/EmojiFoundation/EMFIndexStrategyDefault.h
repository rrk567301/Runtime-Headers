@interface EMFIndexStrategyDefault : EMFAbstractIndexStrategy

- (id)postingsForTerm:(id)a0;
- (id)termsForDocument:(id)a0;
- (id)termWeightForTerm:(id)a0 inDocument:(id)a1;
- (id)commonDocumentsForTerms:(id)a0;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)a0;
- (double)_calculateCumulativeTermWeightForQueryTokenCounts:(id)a0 inDocumentID:(id)a1;

@end
