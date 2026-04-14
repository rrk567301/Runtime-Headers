@class LUI2UserPictureView;

@interface LUI2UserPictureViewController : LUI2ViewController

@property (readonly) LUI2UserPictureView *userPictureView;

- (void)dealloc;
- (void)viewDidLoad;
- (void)_createUserPictureView;

@end
