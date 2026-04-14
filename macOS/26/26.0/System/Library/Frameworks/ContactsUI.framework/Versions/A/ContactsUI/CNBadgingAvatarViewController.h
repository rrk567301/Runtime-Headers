@class NSArray, NSImage, CNAvatarViewController, CNBadgeViewController;

@interface CNBadgingAvatarViewController : NSViewController

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) CNBadgeViewController *badgeViewController;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSImage *badgeImage;

- (void)loadView;
- (void)commonInit;
- (id)init;
- (id)descriptorForRequiredKeys;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setupViewHierarchy;

@end
