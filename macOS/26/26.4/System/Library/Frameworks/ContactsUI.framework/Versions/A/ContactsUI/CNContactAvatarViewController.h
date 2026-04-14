@class CNAvatarViewController, NSString, CNContact;

@interface CNContactAvatarViewController : NSViewController <NSGestureRecognizerDelegate, CNContactCardWidget>

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (nonatomic) BOOL didCreateConstraints;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseUp:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)setAllowsEditing:(BOOL)a0;
- (void)createConstraints;
- (void)setLikeness:(id)a0;
- (void)beginEditingContactImage;
- (void)clearContactImage;
- (double)customSpacingAfterWidget;
- (double)desiredHeight;
- (void)setPropertyKeysToDisplay:(id)a0;
- (void)setStyleProvider:(id)a0;
- (BOOL)shouldBeIncludedInKeyViewLoop;

@end
