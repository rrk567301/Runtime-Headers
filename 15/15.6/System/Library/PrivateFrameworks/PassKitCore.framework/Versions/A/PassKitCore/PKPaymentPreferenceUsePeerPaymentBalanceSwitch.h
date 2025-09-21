@class PKCurrencyAmount, PKPaymentPass;

@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference

@property (retain, nonatomic) PKPaymentPass *peerPaymentPass;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, getter=isOn) char on;
@property (nonatomic, getter=isEnabled) char enabled;

- (void).cxx_destruct;

@end
