@class NSTextField, NSString, NSImageView, NSButton, NSStackView;

@interface EmptyStartPageViewItem : StartPageViewItem <NSTextFieldDelegate> {
    NSTextField *_titleTextField;
    NSStackView *_buttonsStackView;
    id /* block */ _descriptionTextFieldClickHandler;
    NSImageView *_icon;
}

@property (retain, nonatomic) NSTextField *descriptionTextField;
@property (retain, nonatomic) NSButton *primaryButton;
@property (retain, nonatomic) NSButton *secondaryButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (id)_emptyStartPageViewItemButton;
- (void)configureViewWithDescription:(id)a0 imageName:(id)a1;
- (void)configureViewWithTitle:(id)a0 description:(id)a1 secondaryButtonTitle:(id)a2 primaryButtonTitle:(id)a3 target:(id)a4 secondaryButtonAction:(SEL)a5 primaryButtonAction:(SEL)a6 descriptionClickedHandler:(id /* block */)a7;

@end
