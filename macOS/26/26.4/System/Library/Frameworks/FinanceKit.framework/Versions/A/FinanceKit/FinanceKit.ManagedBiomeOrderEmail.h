@class NSString, CNPostalAddress, NSDate, NSNumber;

@interface FinanceKit.ManagedBiomeOrderEmail : NSManagedObject

@property (nonatomic, copy) NSDate *writeTimestamp;
@property (nonatomic, retain) CNPostalAddress *customerBillingAddress;
@property (nonatomic, copy) NSString *customerEmailAddress;
@property (nonatomic, copy) NSString *customerFullName;
@property (nonatomic, copy) NSString *customerPhoneNumber;
@property (nonatomic, copy) NSDate *emailMetadataDateSent;
@property (nonatomic, copy) NSString *emailMetadataFromDisplayName;
@property (nonatomic, copy) NSString *emailMetadataFromEmailAddress;
@property (nonatomic, copy) NSString *emailMetadataMessageID;
@property (nonatomic, copy) NSString *emailMetadataReplyToDisplayName;
@property (nonatomic, copy) NSString *emailMetadataReplyToEmailAddress;
@property (nonatomic, copy) NSString *emailMetadataSenderDomain;
@property (nonatomic, copy) NSString *emailMetadataSubject;
@property (nonatomic, copy) NSString *emailMetadataToDisplayName;
@property (nonatomic, copy) NSString *emailMetadataToEmailAddress;
@property (nonatomic, copy) NSString *merchantDisplayName;
@property (nonatomic, retain) NSNumber *rawOrderContentType;
@property (nonatomic, copy) NSString *orderDate;
@property (nonatomic, copy) NSString *orderNumber;
@property (nonatomic, retain) NSNumber *rawEmailType;
@property (nonatomic, copy) NSString *paymentInformationPaymentMethodDisplayName;
@property (nonatomic) BOOL paymentInformationPaymentMethodIsApplePay;
@property (nonatomic, copy) NSString *paymentInformationPaymentMethodLastFourDigits;
@property (nonatomic, copy) NSString *paymentInformationTotalAmount;
@property (nonatomic, copy) NSString *paymentInformationTotalCurrencyCode;
@property (nonatomic, copy) NSString *shippingInformationCarrierName;
@property (nonatomic, copy) NSString *shippingInformationDeliveryDate;
@property (nonatomic, copy) NSString *shippingInformationDeliveryTime;
@property (nonatomic, copy) NSString *shippingInformationEstimatedDeliveryEndDate;
@property (nonatomic, copy) NSString *shippingInformationEstimatedDeliveryEndTime;
@property (nonatomic, copy) NSString *shippingInformationEstimatedDeliveryStartDate;
@property (nonatomic, copy) NSString *shippingInformationEstimatedDeliveryStartTime;
@property (nonatomic, retain) NSNumber *shippingInformationRawStatus;
@property (nonatomic, copy) NSString *shippingInformationShippingDate;
@property (nonatomic, copy) NSString *shippingInformationShippingMethod;
@property (nonatomic, copy) NSString *shippingInformationShippingTime;
@property (nonatomic, copy) NSString *shippingInformationTrackingNumber;
@property (nonatomic, retain) CNPostalAddress *shippingRecipientAddress;
@property (nonatomic, copy) NSString *shippingRecipientEmailAddress;
@property (nonatomic, copy) NSString *shippingRecipientFullName;
@property (nonatomic, copy) NSString *shippingRecipientPhoneNumber;
@property (nonatomic, copy) NSString *spotlightDomainIdentifier;
@property (nonatomic, copy) NSString *spotlightUniqueIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
