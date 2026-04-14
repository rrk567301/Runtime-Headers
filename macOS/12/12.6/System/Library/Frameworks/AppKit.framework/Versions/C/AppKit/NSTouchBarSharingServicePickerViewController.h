@class NSStackView, NSSharingServicePicker;
@protocol NSSharingServicePickerTouchBarItemDelegate;

@interface NSTouchBarSharingServicePickerViewController : NSViewController {
    NSSharingServicePicker *_picker;
    NSStackView *_stackView;
}

@property (weak) id<NSSharingServicePickerTouchBarItemDelegate> delegate;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (BOOL)_viewControllerSupports10_10Features;
- (void)viewWillAppear;
- (void)_showAppExtensionsPref:(id)a0;
- (void)_loadContents;

@end
