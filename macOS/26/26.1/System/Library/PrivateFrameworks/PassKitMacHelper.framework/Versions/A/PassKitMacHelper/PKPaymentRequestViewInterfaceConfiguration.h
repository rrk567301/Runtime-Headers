@class PKPaymentSheetExperiment, NSString, PKPaymentHardwareStatus, PKPaymentRequest;
@protocol PKPaymentAuthorizationPresenter;

@interface PKPaymentRequestViewInterfaceConfiguration : NSObject

@property (retain, nonatomic) PKPaymentRequest *request;
@property (retain, nonatomic) NSString *localizedApplicationName;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *relevantPassUniqueID;
@property (retain, nonatomic) PKPaymentHardwareStatus *paymentHardwareStatus;
@property (retain, nonatomic) PKPaymentSheetExperiment *paymentSheetExperiment;
@property (weak, nonatomic) id<PKPaymentAuthorizationPresenter> presenter;

- (void).cxx_destruct;
- (id)init;

@end
