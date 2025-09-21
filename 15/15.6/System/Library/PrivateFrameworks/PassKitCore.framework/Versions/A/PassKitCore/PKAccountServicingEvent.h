@class NSString, NSArray, PKAccountServicingEventStatusDetails, PKCurrencyAmount, NSDate;

@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long activityType;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSDate *openDate;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (copy, nonatomic) NSString *reasonCode;
@property (copy, nonatomic) NSString *claimIdentifier;
@property (copy, nonatomic) NSArray *linkedCaseIdentifiers;
@property (copy, nonatomic) PKAccountServicingEventStatusDetails *statusDetails;
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
- (id)initWithDictionary:(id)a0;
- (id)initWithRecord:(id)a0;
- (void)encodeWithRecord:(id)a0;

@end
