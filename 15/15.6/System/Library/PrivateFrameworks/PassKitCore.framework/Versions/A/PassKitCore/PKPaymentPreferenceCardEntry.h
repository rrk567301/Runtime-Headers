@class PKRemotePaymentInstrument, PKPaymentPass, NSString, PKPaymentApplication;

@interface PKPaymentPreferenceCardEntry : NSObject

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *availabilityString;
@property (nonatomic) char shouldShowCardUI;
@property (nonatomic) char isSelectable;
@property (nonatomic) char insetsSeparatorByTextOffset;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
