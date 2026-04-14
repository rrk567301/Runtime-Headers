@interface _INAggregator : NSObject

+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)a0;
+ (BOOL)_canReportDistributionOfVocabularyStringType:(long long)a0;
+ (id)_distributionKeyForVocabularyStringType:(long long)a0;
+ (double)roundCount:(unsigned long long)a0 toSignificantFigure:(unsigned long long)a1;
+ (void)logReceivedCount:(unsigned long long)a0 ofVocabularyStringType:(long long)a1;
+ (void)resetSynapseVocabularyUpdate;

@end
