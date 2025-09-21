@interface ABPersonViewAPIAdapter : ABAddressBookAPIAdapter

- (id)person;
- (void)setPerson:(id)a0;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(char)a1;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(char)a1 shouldShowSuggestedFields:(char)a2;
- (void)_setStyleProvider:(id)a0;

@end
