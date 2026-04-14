@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation

- (id)init;
- (void)setAccountNumber:(id)a0;
- (void)setBankName:(id)a0;
- (void)setRoutingNumber:(id)a0;
- (void)deleteAllBankInformation;
- (void)deleteAllLocalBankInformation;
- (void)updateToLatestKeychainData;
- (id)_wrapperWithType:(unsigned long long)a0;
- (void)_writeBankAccountInformationToKeychain;
- (id)_bankAccountInformationInKeychain;

@end
