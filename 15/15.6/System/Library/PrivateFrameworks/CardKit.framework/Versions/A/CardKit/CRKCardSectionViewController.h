@class NSArray, INUIRemoteViewController, NSView, NSString, CRKCardSectionViewConfiguration;
@protocol CRCardSection, CRKCardSectionViewControllerDelegate, CRKCardSectionView;

@interface CRKCardSectionViewController : NSViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding> {
    char _childVCDesiresInteractivity;
}

@property (retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands;
@property (readonly, nonatomic) INUIRemoteViewController *_remoteViewController;
@property (weak, nonatomic) CRKCardSectionViewConfiguration *viewConfiguration;
@property (weak, nonatomic) id<CRKCardSectionViewControllerDelegate> delegate;
@property (retain) NSView<CRKCardSectionView> *view;
@property (retain, nonatomic) id<CRCardSection> cardSection;
@property (nonatomic, getter=isLoading) char loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_registerWithCardKit;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)a0;
+ (id)cardSectionViewControllerForViewConfiguration:(id)a0;
+ (void)registerCardSectionViewController;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)didEngageCardSection:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)viewWillAppear:(char)a0;
- (char)_canShowWhileLocked;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewDidLayoutSubviews;
- (void)cardSectionViewDidInvalidateSize:(id)a0;
- (void)cardSectionViewDidInvalidateSize:(id)a0 animate:(char)a1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)a0;
- (void)presentViewController:(id)a0;
- (void)willDismissViewController:(id)a0;
- (void)cardSectionViewWillAppearForCardSection:(id)a0 withAppearanceFeedback:(id)a1;
- (id)_backingCardSection;
- (void)_cancelTouchesIfNecessary;
- (char)_checkIfCardSectionIsNull:(id)a0;
- (id)_commands;
- (id)_destinationPunchout;
- (char)_expectsSearchUIView;
- (void)_finishLoadingViewIfNecessary;
- (id)_generateCardSectionViewAppearanceFeedback;
- (char)_hasCorrespondingSearchUIView;
- (id)_initWithCardSection:(id)a0;
- (char)_isIndicatingActivity;
- (char)_isLoadedWithIntentsUIView;
- (void)_loadCardSectionView;
- (void)_performAllCommands;
- (void)_performCommand:(id)a0;
- (id)_preferredPunchoutCommand;
- (void)_resumeTouchesIfNecessary;
- (void)_setViewExternally:(id)a0;
- (void)_setupCardSectionButtons;
- (char)_shouldHideButtonOverlay;
- (char)_shouldRenderButtonOverlay;
- (void)cardEventDidOccur:(unsigned long long)a0 withIdentifier:(id)a1 userInfo:(id)a2;
- (void)cardSectionViewDidAppearForCardSection:(id)a0 withAppearanceFeedback:(id)a1;
- (void)cardSectionViewDidDisappearForCardSection:(id)a0 withDisappearanceFeedback:(id)a1;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)a0;
- (void)cardViewDidAppearForCard:(id)a0 withAppearanceFeedback:(id)a1;
- (void)cardViewDidDisappearForCard:(id)a0 withDisappearanceFeedback:(id)a1;
- (void)cardViewWillAppearForCard:(id)a0 withAppearanceFeedback:(id)a1;
- (void)commandWasPerformed:(id)a0;
- (void)controllerForCard:(id)a0 didReceiveAsyncCard:(id)a1 withAsyncCardReceiptFeedback:(id)a2;
- (void)controllerForCard:(id)a0 didRequestAsyncCard:(id)a1 withAsyncCardRequestFeedback:(id)a2;
- (char)performCommand:(id)a0 forViewController:(id)a1;
- (char)shouldHandleEngagement:(id)a0 forCardSection:(id)a1;
- (void)userDidEngageCardSection:(id)a0 withEngagementFeedback:(id)a1;

@end
