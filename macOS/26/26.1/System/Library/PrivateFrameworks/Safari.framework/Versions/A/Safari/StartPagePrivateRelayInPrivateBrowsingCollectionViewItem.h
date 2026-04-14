@class NSTextField, NSString, NSArray, NSButton, NSStackView;
@protocol StartPagePrivateRelayInPrivateBrowsingCollectionViewItemDelegate;

@interface StartPagePrivateRelayInPrivateBrowsingCollectionViewItem : NSCollectionViewItem <NSTextFieldDelegate> {
    NSArray *_accessibiltyChildren;
}

@property (weak, nonatomic) NSButton *closeButton;
@property (retain, nonatomic) NSButton *learnMoreButton;
@property (retain, nonatomic) NSButton *enablePrivateRelayButton;
@property (weak, nonatomic) NSTextField *bodyText;
@property (weak, nonatomic) NSTextField *titleText;
@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSStackView *buttonStackView;
@property (weak, nonatomic) id<StartPagePrivateRelayInPrivateBrowsingCollectionViewItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)close:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityAutoInteractable;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (void)viewWillLayout;
- (id)_attributedStringForTitle;
- (void)enablePrivateRelay:(id)a0;
- (void)learnMore:(id)a0;

@end
