@class _CDInteractionStore;

@interface PSInteractionAnalyzer : NSObject

@property (retain, nonatomic) _CDInteractionStore *store;

+ (id)categorizeTime:(id)a0;
+ (id)convertTimeToChunks:(id)a0;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)analyzeInteractionPatterns:(id)a0;
- (id)conversationIDForInteraction:(id)a0;
- (id)extractContactInfoFromInteraction:(id)a0;
- (id)generateContactSummariesWithMaxInteractions:(long long)a0 lookbackPeriodInMonths:(long long)a1;
- (id)generateSummaryForContactWithConversationId:(id)a0 interactions:(id)a1;

@end
