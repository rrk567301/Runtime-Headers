@class NSDictionary, NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
    NSDictionary *_footerFields;
}

+ (id)fakePaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupProvisioningFields;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaymentSetupFields:(id)a0;
- (id)paymentSetupFieldWithIdentifier:(id)a0;
- (id)initWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (void)replaceAllPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (void)resetAllPaymentSetupFieldValues;
- (void)prefillDefaultValues;
- (void)replaceAllPaymentSetupFields:(id)a0;
- (void)updateWithPaymentSetupFields:(id)a0 footerFields:(id)a1;
- (id)incompletePaymentSetupFields;
- (id)footerPaymentSetupField;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)a0;
- (void)updateWithPaymentSetupFields:(id)a0;
- (id)paymentSetupFields;
- (id)paymentSetupFieldIdentifiers;
- (id)readonlySetupFieldIdentifiers;
- (id)paymentSetupFieldAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfPaymentSetupFields;
- (BOOL)hasIncompletePaymentSetupFields;
- (id)submissionValuesForDestination:(id)a0;
- (id)footerFieldForIdentifier:(id)a0;
- (BOOL)hasFooterPaymentSetupField;
- (id)secureSubmissionValuesForDestination:(id)a0;
- (id)setupFieldAnalytics;

@end
