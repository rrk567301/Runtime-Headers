@class ProfileIconButton;

@interface ProfileIconPickerCollectionViewItem : NSCollectionViewItem

@property (weak, nonatomic) ProfileIconButton *profileIconButton;

- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
