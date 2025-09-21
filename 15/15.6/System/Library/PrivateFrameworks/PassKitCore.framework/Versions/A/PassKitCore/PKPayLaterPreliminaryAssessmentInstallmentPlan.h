@class NSDecimalNumber, PKPayLaterFinancingAmount;

@interface PKPayLaterPreliminaryAssessmentInstallmentPlan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) PKPayLaterFinancingAmount *installmentAmount;
@property (nonatomic) long long installmentCount;
@property (nonatomic) char hasAPR;
@property (copy, nonatomic) NSDecimalNumber *minimumAPR;
@property (copy, nonatomic) NSDecimalNumber *maximumAPR;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 productType:(unsigned long long)a1;
- (char)isEqualToPreliminaryAssessmentInstallmentPlan:(id)a0;

@end
