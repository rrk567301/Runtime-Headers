@class PHPerson, PXPeopleScalableAvatarView, NSButton, UXLabel;
@protocol PXPeopleMeSuggestionHandler, PXPeopleMeViewControllerDelegate;

@interface PXPeopleMeViewController : UXViewController

@property (retain) PHPerson *suggestedPerson;
@property (retain, nonatomic) NSButton *confirmButton;
@property (retain, nonatomic) NSButton *denyButton;
@property (retain, nonatomic) UXLabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (readonly, nonatomic) id<PXPeopleMeSuggestionHandler> suggestionHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (weak, nonatomic) id<PXPeopleMeViewControllerDelegate> delegate;
@property (nonatomic) double sideInsets;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_buttonWithTitle:(id)a0 action:(SEL)a1 destructive:(BOOL)a2;
- (void)_confirmMe:(id)a0;
- (void)_dismissViewControllerAsConfirmed:(BOOL)a0;
- (void)_rejectMe:(id)a0;
- (id)initWithPerson:(id)a0 suggestionHandler:(id)a1;
- (id)initWithPerson:(id)a0 suggestionHandler:(id)a1 dismissHandler:(id /* block */)a2;
- (double)preferredHeightForWidth:(double)a0;

@end
