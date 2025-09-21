@class NSButton, NSImageView;

@interface CNPhotoLikenessBuddyControlsViewController : NSViewController

@property (retain) NSImageView *iconView;
@property (retain) NSButton *keepExistingPhotoButton;
@property (retain) NSButton *choosePhotoButton;
@property (copy, nonatomic) id /* block */ keepAction;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)dontLetGo:(id)a0;
- (id)makeButtonWithTitle:(id)a0;
- (void)setBuddyControlsHidden:(BOOL)a0;
- (void)setExistingUserImage:(id)a0 withKeepAction:(id /* block */)a1;

@end
