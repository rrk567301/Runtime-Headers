@class INPaymentAccount, NSString, INPaymentAmount, INCurrencyAmount, INDateComponentsRange;

@interface INTransferMoneyIntentResponse : INIntentResponse <INTransferMoneyIntentResponseExport>

@property (readonly) long long code;
@property (copy) INPaymentAccount *fromAccount;
@property (copy) INPaymentAccount *toAccount;
@property (copy) INPaymentAmount *transactionAmount;
@property (copy) INDateComponentsRange *transactionScheduledDate;
@property (copy) NSString *transactionNote;
@property (copy) INCurrencyAmount *transferFee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (int)_typeFromCode:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)propertiesByName;
- (long long)_codeWithName:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (void)setPropertiesByName:(id)a0;

@end
