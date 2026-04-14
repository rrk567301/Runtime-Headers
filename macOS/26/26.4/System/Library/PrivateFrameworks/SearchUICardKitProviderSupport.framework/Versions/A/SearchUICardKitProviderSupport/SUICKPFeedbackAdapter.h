@class NSString;
@protocol CRKFeedbackDelegate;

@interface SUICKPFeedbackAdapter : NSObject <SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRKFeedbackDelegate> feedbackDelegate;

- (id)feedbackListener;
- (void)presentViewController:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void).cxx_destruct;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)cardSectionViewDidInvalidateSize:(id)a0 animate:(BOOL)a1;
- (void)presentViewControllerForCard:(id)a0 animate:(BOOL)a1;
- (BOOL)shouldHandleCardSectionEngagement:(id)a0;
- (void)willDismissViewController:(id)a0;

@end
