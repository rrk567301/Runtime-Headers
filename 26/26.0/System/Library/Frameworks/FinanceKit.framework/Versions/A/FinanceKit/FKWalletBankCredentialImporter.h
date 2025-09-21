@class _FKWalletBankCredentialImporter;

@interface FKWalletBankCredentialImporter : NSObject

@property (retain, nonatomic) _FKWalletBankCredentialImporter *wrappedImporter;

- (id)init;
- (void).cxx_destruct;
- (void)insertCredentialFromACHPaymentInformation:(id)a0 bankName:(id)a1 completion:(id /* block */)a2;

@end
