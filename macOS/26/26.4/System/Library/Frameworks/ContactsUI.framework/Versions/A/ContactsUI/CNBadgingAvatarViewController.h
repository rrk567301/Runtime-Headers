@class NSArray, NSImage, CNAvatarViewController, CNBadgeViewController;

@interface CNBadgingAvatarViewController : NSViewController

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) CNBadgeViewController *badgeViewController;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSImage *badgeImage;

- (void)loadView;
- (void)commonInit;
- (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)setupViewHierarchy;

@end
