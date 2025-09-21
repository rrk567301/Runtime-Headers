@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, VRXInteractionDelegate, SearchUIFeedbackDelegate;

@interface SUICKPFeedbackDelegateDemultiplexer : NSObject <SearchUIFeedbackDelegate, VRXInteractionDelegate> {
    NSObject<OS_dispatch_queue> *_serialInstrumentationFeedbackQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionViewIds;
@property (retain, nonatomic) id<SearchUIFeedbackDelegate> defaultDelegate;
@property (weak, nonatomic) id<VRXInteractionDelegate> snippetUIDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEngageCardSection:(id)a0;
- (void)sendCustomFeedback:(id)a0;
- (void)didErrorOccur:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)presentViewController:(id)a0;
- (id)init;
- (void)cardViewDidDisappear:(id)a0;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (void)didPerformCommand:(id)a0;
- (void).cxx_destruct;
- (void)cardSectionViewDidInvalidateSize:(id)a0;
- (void)cardSectionViewDidInvalidateSize:(id)a0 animate:(BOOL)a1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)a0;
- (void)presentViewControllerForCard:(id)a0 animate:(BOOL)a1;
- (BOOL)shouldHandleCardSectionEngagement:(id)a0;
- (void)willDismissViewController:(id)a0;
- (void)emitInstrumentationEvent:(id)a0;
- (id)_delegateForFeedback:(id)a0;
- (id)_delegateForView:(id)a0;

@end
