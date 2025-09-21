@class ContentHuggingTextView, NSString, NSTextField;
@protocol StartPagePasswordBreachNotificationCollectionViewItemDelegate;

@interface StartPagePasswordBreachWarningCollectionViewItem : StartPageViewItem <NSTextViewDelegate>

@property (weak) NSTextField *titleTextField;
@property (weak) ContentHuggingTextView *bodyTextView;
@property (weak) id<StartPagePasswordBreachNotificationCollectionViewItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_breachWarningBodyStringForHighLevelDomains:(id)a0;
+ (id)_breachWarningPasswordChangeURLForSavedAccounts:(id)a0;

- (void)viewDidLoad;
- (void)close:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (double)heightForWidth:(double)a0;
- (id)_breachWarningBodyStringForSavedAccounts:(id)a0;
- (void)displayBreachForSavedAccounts:(id)a0;

@end
