@class _CDInteractionsStatistics, PeopleSuggesterShareEvent;

@interface _PSPETMessageBuilder : NSObject {
    PeopleSuggesterShareEvent *_shareEvent;
    _CDInteractionsStatistics *_interactionsStatistics;
}

- (void).cxx_destruct;
- (void)addFeedbackEvents:(id)a0;
- (id)getPETMessage;
- (id)initWithInteractionsStatistics:(id)a0 andConfig:(id)a1 andContext:(id)a2 andDeviceIdentifier:(id)a3 andTrialIdentifier:(id)a4 andDefaults:(id)a5;
- (id)privacyMitigatedFeatureValueFromName:(id)a0 forConversationId:(id)a1;

@end
