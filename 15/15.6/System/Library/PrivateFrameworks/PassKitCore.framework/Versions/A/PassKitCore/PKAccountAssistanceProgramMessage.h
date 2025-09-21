@class NSDecimalNumber, NSString;

@interface PKAccountAssistanceProgramMessage : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDecimalNumber *pastDue;
@property (retain, nonatomic) NSDecimalNumber *chargeOffPreventionAmount;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
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

@end
