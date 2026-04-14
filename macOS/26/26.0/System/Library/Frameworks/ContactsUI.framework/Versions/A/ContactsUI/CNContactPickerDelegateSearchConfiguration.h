@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactPickerDelegateSearchConfiguration : ABPersonSearchConfiguration {
    id<CNContactPickerInternalResponseDelegate> _delegate;
}

- (void)searchForString:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
