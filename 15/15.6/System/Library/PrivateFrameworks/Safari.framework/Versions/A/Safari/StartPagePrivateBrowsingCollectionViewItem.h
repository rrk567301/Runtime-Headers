@class NSStackView, NSString, NSTextField;

@interface StartPagePrivateBrowsingCollectionViewItem : NSCollectionViewItem <NSTextFieldDelegate>

@property (weak) NSTextField *titleText;
@property (weak) NSTextField *descriptionText;
@property (weak) NSStackView *stackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isAccessibilityAutoInteractable;
- (void)viewDidLoad;

@end
