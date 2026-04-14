@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation;

+ (long long)dataType;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (BOOL)isValidWithError:(id *)a0;

@end
