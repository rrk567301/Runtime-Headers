@class NSString, StartPageTextField, ContentHuggingTextView;
@protocol StartPagePasswordBreachNotificationCollectionViewItemDelegate;

@interface StartPagePasswordBreachWarningCollectionViewItem : StartPageViewItem <NSTextViewDelegate>

@property (weak) StartPageTextField *titleTextField;
@property (weak) ContentHuggingTextView *bodyTextView;
@property (weak) id<StartPagePasswordBreachNotificationCollectionViewItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_breachWarningPasswordChangeURLForSavedPasswords:(id)a0;
+ (id)_breachWarningBodyStringForHighLevelDomains:(id)a0;

- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)viewDidLoad;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (double)heightForWidth:(double)a0;
- (void)displayBreachForSavedPasswords:(id)a0;
- (id)_breachWarningBodyStringForSavedPasswords:(id)a0;

@end
