@class CNAvatarViewController;

@interface IMGroupAcknowledgementAvatarCell : NSCollectionViewItem

@property (retain) CNAvatarViewController *avatarViewController;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (void)_updateDisplay;
- (void)performIntroAnimationWithDelay:(double)a0;
- (void)_anonymizeContentAndContactsDidChangeNotification:(id)a0;

@end
