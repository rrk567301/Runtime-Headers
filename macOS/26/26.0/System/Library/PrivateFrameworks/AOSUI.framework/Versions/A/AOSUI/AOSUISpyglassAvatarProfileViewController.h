@class NSString, NSView, AOSUISpyglassAccountChangeHelper, CNAvatarViewController;

@interface AOSUISpyglassAvatarProfileViewController : AOSUISpyglassBaseViewController <CNAvatarViewDelegate> {
    AOSUISpyglassAccountChangeHelper *_accountChangeHelper;
}

@property (weak) NSView *imageWell;
@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (id)_displayName;
- (id)_appleAccount;
- (id)initWithAccountManager:(id)a0;
- (void).cxx_destruct;
- (id)nibBundle;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (void)_accountProfilePictureDidChange:(id)a0;
- (id)_avatarViewController;
- (void)_loadProfilePictureFromAccount;
- (void)_setupProfileView;
- (id)_storeAccount;
- (id)_usernameDescriptionString;

@end
