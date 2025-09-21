@class NSStackView, NSSharingServicePicker;
@protocol NSSharingServicePickerTouchBarItemDelegate;

@interface NSTouchBarSharingServicePickerViewController : NSViewController {
    NSSharingServicePicker *_picker;
    NSStackView *_stackView;
}

@property (weak) id<NSSharingServicePickerTouchBarItemDelegate> delegate;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_loadContents;
- (void)_showAppExtensionsPref:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (void)viewWillAppear;

@end
