@class NSResponder;

@interface PhotosUICore.LemonadePickerRootViewController : UXViewController {
    void /* unknown type, empty encoding */ rootModel;
    void /* unknown type, empty encoding */ navigationContext;
    void /* unknown type, empty encoding */ photosSelection;
    void /* unknown type, empty encoding */ pickerConfiguration;
    void /* unknown type, empty encoding */ hostingResponder;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) NSResponder *preferredFirstResponder;

- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;

@end
