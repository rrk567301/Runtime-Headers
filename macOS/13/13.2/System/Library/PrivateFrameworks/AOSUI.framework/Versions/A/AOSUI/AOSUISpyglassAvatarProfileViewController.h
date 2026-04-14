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

- (void)dealloc;
- (void).cxx_destruct;
- (id)_displayName;
- (void)viewDidLoad;
- (id)nibBundle;
- (id)_appleAccount;
- (id)initWithAccountManager:(id)a0;
- (id)_avatarViewController;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (id)_storeAccount;
- (void)_accountProfilePictureDidChange:(id)a0;
- (id)_usernameDescriptionString;
- (void)_setupProfileView;
- (void)_loadProfilePictureFromAccount;

@end
