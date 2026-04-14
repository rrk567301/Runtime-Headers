@class NSButton, StartPagePopoverTogglesDataSource;

@interface ToggleRowItem : NSCollectionViewItem

@property (readonly, nonatomic) NSButton *toggle;
@property (nonatomic) BOOL dragging;
@property (weak, nonatomic) StartPagePopoverTogglesDataSource *data;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityTitle;
- (void)loadView;
- (id)accessibilityValue;
- (void)mouseUp:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)_handleMouseUpEvent;
- (void)_toggleSwitch:(id)a0;
- (void)configureRow:(id)a0 imageView:(id)a1 label:(id)a2;
- (void)_toggleSwitchWithControl:(id)a0;

@end
