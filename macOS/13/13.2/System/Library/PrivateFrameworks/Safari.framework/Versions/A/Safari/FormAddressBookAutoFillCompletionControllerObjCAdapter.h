@interface FormAddressBookAutoFillCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter

- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)initWithCompletionController:(void *)a0;
- (void)completionWindowDidShow;
- (double)widthOfCellForItem:(void *)a0;
- (void)_registerAddressBookAutoFillTableViewCellClasses;
- (id)contactNameAndContactLabelForRecentlyUsedAutoFillCommand:(void *)a0;
- (id)voiceOverAnnouncementForRecentlyUsedAutoFillCommand:(void *)a0;
- (id)addressBookDataWillBeFilledOrOmittedStringForRecentlyUsedAutoFillCommand:(void *)a0;
- (id)contactMatchAndContactLabelForNonNameFieldAutoFillCommand:(void *)a0;

@end
