@class NSString, PKAccountTransferScheduleDetails, NSDate, PKCurrencyAmount, PKAccountTransferExternalAccount;

@interface PKAccountTransfer : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *clientReferenceIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) PKCurrencyAmount *holdAmount;
@property (copy, nonatomic) NSDate *transferDate;
@property (copy, nonatomic) NSDate *transferStatusDate;
@property (nonatomic) char cancellable;
@property (copy, nonatomic) NSDate *cancellationExpiryDate;
@property (copy, nonatomic) NSDate *expectedCompletionDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKAccountTransferExternalAccount *externalAccount;
@property (retain, nonatomic) PKAccountTransferScheduleDetails *scheduleDetails;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)recordNamePrefix;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecord:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (char)fundsAreAvailable;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (char)isCurrentlyCancellable;

@end
