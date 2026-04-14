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

- (id)_displayName;
- (id)initWithAccountManager:(id)a0;
- (id)_appleAccount;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nibBundle;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (void)_accountProfilePictureDidChange:(id)a0;
- (id)_avatarViewController;
- (void)_loadProfilePictureFromAccount;
- (void)_setupProfileView;
- (id)_storeAccount;
- (id)_usernameDescriptionString;

@end
