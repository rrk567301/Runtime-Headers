@class NSTextField, NSString, PXStatusViewModel, NSButton;
@protocol PXStatusViewDelegate;

@interface PXStatusView : NSView <PXChangeObserver> {
    NSTextField *_titleLabel;
    NSTextField *_messageLabel;
    NSButton *_button;
}

@property (retain, nonatomic) PXStatusViewModel *viewModel;
@property (weak, nonatomic) id<PXStatusViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTitle;
- (void)_updateMessage;
- (void)_updateButtonTitle;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)test_title;
- (void)_handleButtonAction;
- (id)test_message;
- (id)test_actionTitle;

@end
