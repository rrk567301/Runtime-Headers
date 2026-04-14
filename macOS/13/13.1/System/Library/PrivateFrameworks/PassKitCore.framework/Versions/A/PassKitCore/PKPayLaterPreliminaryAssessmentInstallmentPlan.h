@class NSDecimalNumber, PKPayLaterFinancingAmount;

@interface PKPayLaterPreliminaryAssessmentInstallmentPlan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) PKPayLaterFinancingAmount *installmentAmount;
@property (nonatomic) long long installmentCount;
@property (nonatomic) BOOL hasAPR;
@property (copy, nonatomic) NSDecimalNumber *minimumAPR;
@property (copy, nonatomic) NSDecimalNumber *maximumAPR;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 productType:(unsigned long long)a1;
- (BOOL)isEqualToPreliminaryAssessmentInstallmentPlan:(id)a0;

@end
