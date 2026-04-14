@class NSTextField, NSString, StartPagePopoverViewController, StartPagePopoverTogglesDataSource, NSButton;

@interface ToggleRowItem : NSCollectionViewItem {
    NSTextField *_label;
}

@property (weak, nonatomic) StartPagePopoverViewController *startPagePopoverViewController;
@property (readonly, nonatomic) NSButton *toggle;
@property (nonatomic) BOOL dragging;
@property (weak, nonatomic) StartPagePopoverTogglesDataSource *data;
@property (copy, nonatomic) NSString *profileIdentifier;

- (id)accessibilityLabel;
- (void)mouseUp:(id)a0;
- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (id)accessibilityValue;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (void)setLabel:(id)a0;
- (void).cxx_destruct;
- (void)_handleMouseUpEvent;
- (void)_toggleSwitch:(id)a0;
- (void)configureRow:(id)a0 imageView:(id)a1 label:(id)a2;

@end
