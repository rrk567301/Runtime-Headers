@class NSButton, NSImageView;

@interface CNPhotoLikenessBuddyControlsViewController : NSViewController

@property (retain) NSImageView *iconView;
@property (retain) NSButton *keepExistingPhotoButton;
@property (retain) NSButton *choosePhotoButton;
@property (copy, nonatomic) id /* block */ keepAction;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setBuddyControlsHidden:(BOOL)a0;
- (void)setExistingUserImage:(id)a0 withKeepAction:(id /* block */)a1;
- (id)makeButtonWithTitle:(id)a0;
- (void)dontLetGo:(id)a0;

@end
