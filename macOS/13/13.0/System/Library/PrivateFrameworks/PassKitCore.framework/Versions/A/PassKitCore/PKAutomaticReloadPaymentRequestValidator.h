@class NSString, PKAutomaticReloadPaymentRequest;

@interface PKAutomaticReloadPaymentRequestValidator : NSObject <PKPaymentValidating>

@property (readonly, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validatorWithObject:(id)a0;
+ (Class)validatedClass;

@end
