@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass {
    NSDictionary *_dictionary;
}

- (id)localizedDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)devicePrimaryPaymentApplication;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;

@end
