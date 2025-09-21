@class NSString, NSTimeZone, NSDate;

@interface PKAccountTransferScheduleDetails : NSObject <NSSecureCoding> {
    NSTimeZone *_productTimeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long frequency;
@property (nonatomic) long long scheduledDay;
@property (copy, nonatomic) NSDate *scheduledDate;
@property (copy, nonatomic) NSString *transferTermsIdentifier;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)hashString;
- (id)description;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonString;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (void)setScheduleTimeZone:(id)a0;

@end
