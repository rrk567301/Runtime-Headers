@class NSImageView, NSTextField, NSScrollView, NSView, TFBetaAppLaunchPresenter, NSStackView;
@protocol TFBetaAppLaunchScreenHost, _TtP14TestFlightCore19WhatToTestInterface_;

@interface TFBetaAppLaunchScreenWindowController : NSWindowController <TestFlightCore.WhatToTestDelegate, TFBetaAppLaunchPresenterView>

@property (readonly, nonatomic) TFBetaAppLaunchPresenter *presenter;
@property (nonatomic) BOOL hasNextPage;
@property (retain, nonatomic) NSImageView *appImageView;
@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSScrollView *whatToTestDescription;
@property (retain, nonatomic) NSTextField *appTitle;
@property (retain, nonatomic) NSTextField *appSubTitles;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSView *toolBarView;
@property (retain, nonatomic) id<_TtP14TestFlightCore19WhatToTestInterface_> interface;
@property (weak, nonatomic) id<TFBetaAppLaunchScreenHost> launchScreenHost;

- (void)dismissAnimated:(BOOL)a0;
- (id)initWithPresenter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_titleTextField;
- (void)_setupWindow;
- (void)_didPressExitLaunchScreenButton;
- (void)_didPressNavigationItemCancel;
- (void)_didPressOpenHowToSupportLinkButton;
- (void)_didPressShowHowToButton;
- (void)_hideWelcomeScreen;
- (id)_howToShareTextField;
- (id)_setupAppInfoStackView;
- (void)_setupShareFeedback;
- (id)_setupWhatToTestDescription;
- (id)_shareFeedbackTitleTextField;
- (id)_shareMacImage;
- (id)_shareMacImageView;
- (id)_shareShortcutImage;
- (id)_shareShortcutImageView;
- (id)_whatToTestTextField;
- (void)linkActionButtonWindow:(id)a0;
- (void)showHowToWithTitle:(id)a0 subtitle:(id)a1 screenshotImageDict:(id)a2 primaryButtonTitle:(id)a3 primaryButtonEvent:(unsigned long long)a4 secondaryButtonTitle:(id)a5 secondaryButtonEvent:(unsigned long long)a6 animated:(BOOL)a7;
- (void)showLoadingAnimated:(BOOL)a0;
- (void)showTestNotesWithTitle:(id)a0 lockup:(id)a1 testNotesTitle:(id)a2 testNotesText:(id)a3 primaryButtonTitle:(id)a4 primaryButtonEvent:(unsigned long long)a5 animated:(BOOL)a6 fetchingOnImageFetcher:(id)a7;
- (void)tapOnButtonWith:(long long)a0;
- (void)viewIsReadyWithInterface:(id)a0;

@end
