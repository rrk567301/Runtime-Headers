@protocol ABNameViewCompanyCheckBoxDelegate;

@interface ABNameViewCompanyCheckBox : NSButton

@property (weak, nonatomic) id<ABNameViewCompanyCheckBoxDelegate> delegate;

- (BOOL)resignFirstResponder;
- (void).cxx_destruct;

@end
