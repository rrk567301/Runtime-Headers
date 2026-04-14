@class NSString, NSTimeZone, NSDate;

@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding> {
    NSTimeZone *_productTimeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long frequency;
@property (nonatomic) long long scheduledDay;
@property (nonatomic) long long preset;
@property (copy, nonatomic) NSDate *scheduledDate;
@property (copy, nonatomic) NSString *paymentTermsIdentifier;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)hashString;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)jsonDictionaryRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)jsonString;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (void)setScheduleTimeZone:(id)a0;

@end
