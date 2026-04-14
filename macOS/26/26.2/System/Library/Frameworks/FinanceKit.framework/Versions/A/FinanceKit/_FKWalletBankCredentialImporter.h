@class FKAccountPaymentInformationACH, NSString, NSError;

@interface _FKWalletBankCredentialImporter : NSObject {
    void /* unknown type, empty encoding */ financeStore;
}

+ (id)makeImporter;

- (void).cxx_destruct;
- (id)init;
- (void)insertCredentialFrom:(FKAccountPaymentInformationACH *)a0 bankName:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;

@end
