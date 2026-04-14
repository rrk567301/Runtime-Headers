@class NSImageView, NSTextField, NSImage, NSString;

@interface CNAutocompleteSuggestionsCell : NSCollectionViewItem

@property (retain, nonatomic) NSImageView *avatarView;
@property (retain, nonatomic) NSTextField *nameLabel;
@property (nonatomic) BOOL drawsSelected;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *displayString;

+ (id)cellIdentifier;

- (void)loadView;
- (void).cxx_destruct;
- (void)updateDisplay;

@end
