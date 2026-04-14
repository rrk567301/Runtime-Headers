@class OneLineCellLockupModel, NSImageView, NSTextField;

@interface OneLineCellLockup : NSTableCellView

@property (weak, nonatomic) NSImageView *artworkView;
@property (weak, nonatomic) NSTextField *primaryLabel;
@property (retain, nonatomic) OneLineCellLockupModel *viewModel;

+ (id)lockup;
+ (id)keyPathsForValuesAffectingViewModel;

- (id)init;
- (void).cxx_destruct;
- (void)setupLabelVerticalLayout;
- (id)propertyKeysForViewSpy;

@end
