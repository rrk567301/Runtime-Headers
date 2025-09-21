@class NSView, MUIManualSummaryViewModel, MUIManualSummaryView, NSWindowController;
@protocol MUIManualSummaryViewManagerDelegate;

@interface MUIManualSummaryViewManager : NSObject

@property (nonatomic, readonly) NSView *view;
@property (nonatomic) BOOL didCancelSummarization;
@property (nonatomic, retain) MUIManualSummaryViewModel *viewModel;
@property (nonatomic, retain) id<MUIManualSummaryViewManagerDelegate> delegate;
@property (nonatomic, retain) MUIManualSummaryView *summaryView;
@property (nonatomic, retain) NSWindowController *onboardingController;

- (id)init;
- (void).cxx_destruct;
- (void)beginSummarizingUsingExternalIntelligence:(BOOL)a0;
- (void)configureManualSummaryView;
- (void)didSelectShowSummaryButtonForSummaryView:(id)a0;
- (id)initWithViewModel:(id)a0 delegate:(id)a1 summaryView:(id)a2;
- (BOOL)needsToUseExternalIntelligenceErrorFrom:(id)a0;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 confirmTitle:(id)a2 confirmActionHandler:(id /* block */)a3 cancelTitle:(id)a4 cancelActionHandler:(id /* block */)a5;
- (void)refreshFonts;
- (void)refreshSummaryViewModel;
- (void)requestConfirmationToDisplaySummary;
- (void)resetToInitialStateIfLoading;

@end
