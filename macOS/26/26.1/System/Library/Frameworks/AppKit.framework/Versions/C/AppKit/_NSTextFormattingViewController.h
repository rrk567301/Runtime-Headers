@class _NSTextFormattingViewControllerFormattingDescriptor, _NSTextFormattingViewControllerConfiguration;

@interface _NSTextFormattingViewController : NSViewController {
    void /* unknown type, empty encoding */ _configuration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textFormattingViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textFormattingView;
}

@property (nonatomic, readonly) _NSTextFormattingViewControllerConfiguration *configuration;
@property (nonatomic, retain) _NSTextFormattingViewControllerFormattingDescriptor *formattingDescriptor;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, weak) void /* function */ _syncClient;
@property (nonatomic, weak) void /* function */ _asyncClient;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (id)initWithConfiguration:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)encodeWithCoder:(id)a0;
- (void)_updateConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateWithCurrentClient;
- (void)viewWillAppear;

@end
