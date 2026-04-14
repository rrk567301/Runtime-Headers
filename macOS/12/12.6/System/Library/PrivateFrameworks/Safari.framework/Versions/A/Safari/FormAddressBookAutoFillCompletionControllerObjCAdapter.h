@interface FormAddressBookAutoFillCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter

- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)initWithCompletionController:(void *)a0;
- (void)_registerAddressBookAutoFillTableViewCellClasses;
- (void)completionWindowDidShow;
- (id)contactMatchAndContactLabelForNonNameFieldAutoFillCommand:(void *)a0;
- (id)contactNameAndContactLabelForRecentlyUsedAutoFillCommand:(void *)a0;
- (id)addressBookDataWillBeFilledOrOmittedStringForRecentlyUsedAutoFillCommand:(void *)a0;
- (double)widthOfCellForItem:(void *)a0;
- (id)voiceOverAnnouncementForRecentlyUsedAutoFillCommand:(void *)a0;

@end
