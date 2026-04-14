@interface FormAutoFillFunctionBarProvider : AutoFillFunctionBarProvider

- (BOOL)didShowAutoFillQuickTypeForItem:(const void *)a0;
- (id)imageForCompletionListItem:(const void *)a0;
- (id)textForCompletionListItem:(const void *)a0;
- (id)_keychainImage;
- (BOOL)_isCredentialAutoFillItem:(const void *)a0;
- (id)_imageForPasswordItem:(const void *)a0;
- (id)_imageForCreditCardItem:(const void *)a0;
- (id)_imageForFormAutoFillItem:(const void *)a0;
- (id)_textForPasswordItem:(const void *)a0;
- (id)_textForCreditCardItem:(const void *)a0;
- (id)_textForSingleCreditCardDataItem:(const void *)a0;
- (id)_textForFormAutoFillItem:(const void *)a0;

@end
