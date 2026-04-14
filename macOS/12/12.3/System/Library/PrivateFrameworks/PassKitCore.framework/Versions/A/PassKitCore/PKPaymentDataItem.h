@class PKPaymentAuthorizationDataModel, NSArray, NSString;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating>

@property (class, readonly, nonatomic) BOOL supportsMultipleItems;

@property (weak, nonatomic) PKPaymentAuthorizationDataModel *model;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic, getter=isRejected) BOOL rejected;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSArray *paymentContactFormatErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)dataType;
+ (BOOL)validateBillingAddressForItem:(id)a0 billingAddress:(id)a1 outError:(id *)a2;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (BOOL)isValidWithError:(id *)a0;

@end
