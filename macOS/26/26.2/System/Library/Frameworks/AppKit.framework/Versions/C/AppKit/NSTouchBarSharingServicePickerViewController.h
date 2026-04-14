@class NSStackView, NSSharingServicePicker;
@protocol NSSharingServicePickerTouchBarItemDelegate;

@interface NSTouchBarSharingServicePickerViewController : NSViewController {
    NSSharingServicePicker *_picker;
    NSStackView *_stackView;
}

@property (weak) id<NSSharingServicePickerTouchBarItemDelegate> delegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_loadContents;
- (void)_showAppExtensionsPref:(id)a0;
- (BOOL)_viewControllerSupports10_10Features;
- (void)viewWillAppear;

@end
