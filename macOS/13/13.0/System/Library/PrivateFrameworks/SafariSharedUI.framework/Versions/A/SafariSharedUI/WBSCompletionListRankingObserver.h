@class SFRankingFeedback, NSString;
@protocol WBSCompletionListRankingObserverDelegate, _CompletionListRankingObserverFeedbackGenerator;

@interface WBSCompletionListRankingObserver : NSObject <_CompletionListRankingObserverFeedbackGeneratorDelegate> {
    id<_CompletionListRankingObserverFeedbackGenerator> _feedbackGenerator;
}

@property (weak, nonatomic) id<WBSCompletionListRankingObserverDelegate> delegate;
@property (readonly, nonatomic) SFRankingFeedback *rankingFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeAllSectionsAndItems;
- (void)didAddItem:(id)a0 hidingOutrankedResults:(id)a1 hidingDuplicateResults:(id)a2;
- (void)didBeginRanking;
- (void)didBeginSectionWithBundleIdentifier:(id)a0;
- (void)didEndRanking;
- (id)_createFeedbackGenerator;
- (unsigned long long)completionListRankingObserverFeedbackGenerator:(id)a0 frequentlyVisitedSitesIndexOfItem:(id)a1 hidingItem:(id)a2;
- (void)didAddItem:(id)a0;
- (Class)_feedbackGeneratorClass;

@end
