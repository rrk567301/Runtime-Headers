@class NSArray, NSImage, CNAvatarViewController, CNBadgeViewController;

@interface CNBadgingAvatarViewController : NSViewController

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) CNBadgeViewController *badgeViewController;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSImage *badgeImage;

- (void)commonInit;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptorForRequiredKeys;
- (id)init;
- (void)awakeFromNib;
- (void)setupViewHierarchy;

@end
