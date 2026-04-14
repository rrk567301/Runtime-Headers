@class NSArray, NSImage, CNAvatarViewController, CNBadgeViewController;

@interface CNBadgingAvatarViewController : NSViewController

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) CNBadgeViewController *badgeViewController;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSImage *badgeImage;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)loadView;
- (void)commonInit;
- (id)descriptorForRequiredKeys;
- (void)setupViewHierarchy;

@end
